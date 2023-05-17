#ifndef RENDERER_H
#define RENDERER_H

#include "SDL2/SDL.h"
#include "snake.h"

class Renderer{


    public:
    Renderer(std::size_t a, std::size_t b, std::size_t c, std::size_t d);
    void Render(Snake &snake);
    private:

      SDL_Window *window;
      SDL_Renderer *renderer;
      std::size_t screen_width;
      std::size_t screen_height;
      std::size_t grid_width;
      std::size_t grid_height;
};

#endif