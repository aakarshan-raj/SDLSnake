#ifndef GAME_H
#define GAME_H

#include "SDL2/SDL.h"
#include "snake.h"

class Game{

  public:

  Game(int grid_width,int grid_height):snake(grid_width,grid_height){};
  void run();

  private:
  Snake snake;

};

#endif