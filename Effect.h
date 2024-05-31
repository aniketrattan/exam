#ifndef EFFECT_H
#define EFFECT_H

#include "Cell.h"

class Effect {
public:
  virtual void apply(Cell &cell) = 0;
  virtual ~Effect() = default;
};

#endif // EFFECT_H
