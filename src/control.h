#ifndef CONTROL_H
#define CONTROL_H
#include "snake.h"

class Control{

  public:
  void ChangeDirection(Snake &snake, Snake::Direction input,
                       Snake::Direction opposite);
  void HandleInput(bool &running,Snake &snake);

};

#endif