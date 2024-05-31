#ifndef CHARACTER_H
#define CHARACTER_H
#include "Cell.h"

class Character : public Cell{
    public:
    Character(int x, int y) : Cell (x, y, 'C') {};
    void move(int dx, int dy) {
        std::get<0>(position) += dx;
        std::get<1>(position) += dy;
    }
};

#endif // CHARACTER_H