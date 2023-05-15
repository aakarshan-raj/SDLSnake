#ifndef RENDERER_H
#define RENDERER_H
#include "SDL2/SDL.h"

class Renderer{
public:
    Renderer(int a,int b,int c,int d);

private:
SDL_Window* window;
SDL_Renderer* render;
int screen_width;
int screen_height;
int grid_width;
int grid_height;


};

#endif