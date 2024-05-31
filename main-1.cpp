#include "Utils.h"
#include <iostream>
#include <tuple>

int main() {
  auto pos1 = Utils::generateRandomPos(100, 100);
  auto pos2 = Utils::generateRandomPos(100, 100);

  std::cout << "Position 1: (" << std::get<0>(pos1) << ", " << std::get<1>(pos1)
            << ")\n";
  std::cout << "Position 2: (" << std::get<0>(pos2) << ", " << std::get<1>(pos2)
            << ")\n";
  std::cout << "Distance: " << Utils::calculateDistance(pos1, pos2) << "\n";

  return 0;
}
