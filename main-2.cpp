#include <iostream>
#include "Trap.h"
#include "Character.h"

int main() {
    Character character(0, 0);
    Trap trap(1, 1);

    std::cout << "Character position: (" << std::get<0>(character.getPos()) << ", " << std::get<1>(character.getPos()) << ")\n";
    std::cout << "Trap position: (" << std::get<0>(trap.getPos()) << ", " << std::get<1>(trap.getPos()) << ")\n";
    std::cout << "Trap active: " << (trap.isActive() ? "Yes" : "No") << "\n";

    character.move(1, 1);
    trap.apply(character);

    std::cout << "Character new position: (" << std::get<0>(character.getPos()) << ", " << std::get<1>(character.getPos()) << ")\n";
    std::cout << "Character type: " << character.getType() << "\n";
    std::cout << "Trap active: " << (trap.isActive() ? "Yes" : "No") << "\n";

    return 0;
}
