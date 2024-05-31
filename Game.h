#ifndef GAME_H
#define GAME_H

#include "Cell.h"
#include "Character.h"
#include "Trap.h"
#include "Utils.h"
#include <cstdlib>
#include <iostream>
#include <vector>


class Game {
private:
  std::vector<Cell *> grid;

public:
  Game() = default;

  std::vector<Cell *> &getGrid() { return grid; }

  void initGame(int numCharacters, int numTraps, int gridWidth,
                int gridHeight) {
    for (int i = 0; i < numCharacters; ++i) {
      auto [x, y] = Utils::generateRandomPos(gridWidth, gridHeight);
      grid.push_back(new Character(x, y));
    }
    for (int i = 0; i < numTraps; ++i) {
      auto [x, y] = Utils::generateRandomPos(gridWidth, gridHeight);
      grid.push_back(new Trap(x, y));
    }
  }

  void gameLoop(int maxIterations, double trapActivationDistance) {
    for (int iteration = 0; iteration < maxIterations; ++iteration) {
      for (auto entity : grid) {
        if (entity->getType() == 'C') {
          Character *character = static_cast<Character *>(entity);
          character->move(1, 0);

          auto [x, y] = character->getPos();
          if (x >= 100 || y >= 100 || x < 0 || y < 0) {
            std::cout << "Character has won the game!\n";
            return;
          }

          for (auto other : grid) {
            if (other->getType() == 'T') {
              Trap *trap = static_cast<Trap *>(other);
              if (Utils::calculateDistance(character->getPos(),
                                           trap->getPos()) <=
                  trapActivationDistance) {
                trap->apply(*character);
              }
            }
          }
        }
      }
    }
    std::cout << "Maximum number of iterations reached. Game over.\n";
  }

  ~Game() {
    for (auto entity : grid) {
      delete entity;
    }
  }
};

#endif // GAME_H
