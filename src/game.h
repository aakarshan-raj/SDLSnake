#ifndef GAME_H
#define GAME_H

#include "renderer.h"
#include "control.h"
#include "snake.h"
#include <iostream>
#include <random>


class Game{
   public:
   Game(int grid_width,int grid_height);
  
   void run(Control &control,Renderer &render);
   void Update();
   void PlaceFood();
   
   private:
   Snake snake;
   SDL_Point food;
   std::random_device dev;
   std::mt19937 mt;
   std::uniform_int_distribution<int> random_x;
   std::uniform_int_distribution<int> random_y;

};

#endif