#include <iostream>
#include "Cell.h"
#include "Utils.h"

int main() {
    Cell cell(0, 0, 'A');
    std::cout << "Cell position: (" << std::get<0>(cell.getPos()) << ", " << std::get<1>(cell.getPos()) << ")\n";
    std::cout << "Cell type: " << cell.getType() << "\n";

    cell.setPos(1, 1);
    cell.setType('B');
    std::cout << "New cell position: (" << std::get<0>(cell.getPos()) << ", " << std::get<1>(cell.getPos()) << ")\n";
    std::cout << "New cell type: " << cell.getType() << "\n";

    auto pos1 = Utils::generateRandomPos(10, 10);
    auto pos2 = Utils::generateRandomPos(10, 10);
    std::cout << "Random position 1: (" << std::get<0>(pos1) << ", " << std::get<1>(pos1) << ")\n";
    std::cout << "Random position 2: (" << std::get<0>(pos2) << ", " << std::get<1>(pos2) << ")\n";
    std::cout << "Distance between positions: " << Utils::calculateDistance(pos1, pos2) << "\n";

    return 0;
}
