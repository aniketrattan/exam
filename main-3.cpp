#include "Game.h"
#include <iostream>


int main() {
  Game game;
  game.initGame(5, 3, 100, 100);

  std::cout << "Initial game grid:\n";
  for (auto entity : game.getGrid()) {
    std::cout << "Entity type: " << entity->getType() << " at position ("
              << std::get<0>(entity->getPos()) << ", "
              << std::get<1>(entity->getPos()) << ")\n";
  }

  game.gameLoop(10, 2.0);

  std::cout << "\nGame grid after loop:\n";
  for (auto entity : game.getGrid()) {
    std::cout << "Entity type: " << entity->getType() << " at position ("
              << std::get<0>(entity->getPos()) << ", "
              << std::get<1>(entity->getPos()) << ")\n";
  }

  return 0;
}
