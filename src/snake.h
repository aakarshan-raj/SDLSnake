#ifndef SNAKE_H
#define SNAKE_H

#include "SDL2/SDL.h"

class Snake{

    public:
    Snake(int grid_width,int grid_height):
          grid_height(grid_height),
          grid_width(grid_width),
          head_x(grid_width/2),
          head_y(grid_height/2){}
    enum class Direction{UP,DOWN,RIGHT,LEFT};

    Direction direction = Direction::UP;
    float head_x;
    float head_y;
    float speed{0.1};
    int size{1};
    bool alive{true};
    bool growing {false};
    int grid_width;
    int grid_height;

    void Update();
    void UpdateHead();

};

#endif 