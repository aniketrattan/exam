#ifndef TRAP_H
#define TRAP_H
#include "Cell.h"
#include "Effect.h"

class Trap : public Cell, public Effect {
protected:
  bool active = true;

public:
  Trap(int x, int y) : Cell(x, y, 'T') {}
  bool isActive() const { return active; }
  void apply(Cell &cell) override {
    cell = Cell(-1, -1, 'T');
    active = false;
  }
};

#endif // TRAP_H