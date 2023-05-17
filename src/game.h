#ifndef GAME_H
#define GAME_H

#include "renderer.h"
#include "control.h"
#include "snake.h"
#include <iostream>


class Game{
   public:
   Game(int grid_width,int grid_height):
        snake(grid_width,grid_height){


        }
  
   void run(Control &control,Renderer &render);
   void Update();

   private:
   Snake snake;


};

#endif