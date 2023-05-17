#include "renderer.h"
#include <iostream>

Renderer::Renderer(std::size_t a, std::size_t b,
                    std::size_t c, std::size_t d):
                    screen_width(a),screen_height(b),
                    grid_width(c),grid_height(d){

window = SDL_CreateWindow("window",SDL_WINDOWPOS_CENTERED,SDL_WINDOWPOS_CENTERED,
                          screen_width,screen_height,SDL_WINDOW_SHOWN);
renderer = SDL_CreateRenderer(window,-1,SDL_RENDERER_ACCELERATED);

                    }

void Renderer::Render(Snake &snake){

 SDL_Rect block;
 block.w = screen_width/grid_width;
 block.h = screen_height/grid_height;
 block.x = block.w*snake.head_x;
 block.y = block.h*snake.head_y;

 
 std::cout<<"("<<snake.head_x<<","<<snake.head_y<<")"<<std::endl;
 SDL_SetRenderDrawColor(renderer,0x00,0x00,0x00,0x00);
 SDL_RenderClear(renderer);
  SDL_SetRenderDrawColor(renderer,0xde,0x2f,0xdd,0xdd);

 SDL_RenderFillRect(renderer,&block);
 SDL_RenderPresent(renderer);

}                    