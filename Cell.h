#ifndef CELL_H
#define CELL_H

#include <tuple>

class Cell {
protected:
  std::tuple<int, int> position;
  char type;

public:
  Cell(int x, int y, char t) : position(x, y), type(t) {}

  std::tuple<int, int> getPos() const { return position; }

  char getType() const { return type; }

  void setPos(int x, int y) { position = std::make_tuple(x, y); }

  void setType(char t) { type = t; }
};

#endif // CELL_H
