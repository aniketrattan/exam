#include "Character.h"
#include "Effect.h"
#include "Trap.h"
#include <iostream>

int main() {
  Character character(10, 10);
  Trap trap(15, 15);

  std::cout << "Character position: (" << std::get<0>(character.getPos())
            << ", " << std::get<1>(character.getPos()) << ")\n";
  std::cout << "Trap position: (" << std::get<0>(trap.getPos()) << ", "
            << std::get<1>(trap.getPos()) << ")\n";

  character.move(5, 5);
  std::cout << "Character new position: (" << std::get<0>(character.getPos())
            << ", " << std::get<1>(character.getPos()) << ")\n";
  return 0;
}
