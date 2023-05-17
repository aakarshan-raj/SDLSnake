#ifndef SNAKE_H
#define SNAKE_H
#include "SDL2/SDL.h"
#include <vector>

class Snake{
    public:
    enum class Direction{kUp,kDown,kRight,kLeft};

    Snake(int grid_width,int grid_height):
          head_x(grid_width/1),
          head_y(grid_height/2){}
    Direction direction = Direction::kUp;      

    int size{0};
    bool alive{true};
    void Update();
    void UpdateHead();
    void UpdateBody(SDL_Point& , SDL_Point&);
    float speed{0.1};
    std::vector<SDL_Point> body;
    bool growing{false};
    private:
    float head_x;
    float head_y;
    int grid_width;
    int grid_height;
   


};

#endif