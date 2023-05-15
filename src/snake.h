#ifndef SNAKE_H
#define SNAKE_H
#include "SDL2/SDL.h"

class Snake{
    public:
    enum class Direction{kUp,kDown,kRight,kLeft};

    Snake(int grid_width,int grid_height):
          head_x(grid_width/1),
          head_y(grid_height/2){}
    Direction direction = Direction::kUp;      
int size{0};
   private:
   float head_x;
   float head_y;
   int grid_width;
   int grid_height;
   


};

#endif