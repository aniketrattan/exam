#ifndef CELL_H
#define CELL_H
#include <tuple>

class Cell {
protected:
  std::tuple<int, int> position;
  char type;

public:
  Cell(int x, int y, char type) {
    x = 0;
    y = 0;
    type = ' ';
  };
  std::tuple<int, int> getPos() { return position; }
  char getType() { return type; }
  void setPos(int x, int y) {
    std::get<0>(position) = x;
    std::get<1>(position) = y;
  }
  void setType(char type) { this->type = type; }
};

#endif // CELL_H