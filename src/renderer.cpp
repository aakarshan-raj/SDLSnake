#include "renderer.h"


Renderer::Renderer(int a,int b,int c,int d):screen_width(a),screen_height(b),
                                            grid_width(c),grid_height(d){

          window = SDL_CreateWindow("window",SDL_WINDOWPOS_CENTERED,SDL_WINDOWPOS_CENTERED,screen_width,screen_height,SDL_WINDOW_SHOWN);
          render = SDL_CreateRenderer(window,-1,SDL_RENDERER_ACCELERATED);                                      

}