#include "snake.h"
#include <iostream>
#include <cmath>

void Snake::Update(){

int prev_x = static_cast<int>(head_x);
int prev_y = static_cast<int>(head_y);

UpdateHead();

int current_x = static_cast<int>(head_x);
int current_y = static_cast<int>(head_y);


UpdateBody();

}

void Snake::UpdateHead(){

   switch (Snake::direction)
   {
   case Snake::Direction::kUp:
    head_y -= speed;
    break;
   
   case Snake::Direction::kDown:
    head_y += speed; 
    break;
   
   case Snake::Direction::kRight:
    head_x += speed;
    break;
   
   case Snake::Direction::kLeft:
    head_x -= speed;
    break;
   }
  
   head_x = fmod(head_x+grid_width,grid_width);
   head_y = fmod(head_y+grid_height,grid_height);
}

void Snake::UpdateBody(SDL_Point& current_cell, SDL_Point& prev_cell){
     body.push_back(prev_cell);

     if(!growing){
        body.erase(body.begin());
     }  
     else{
        growing = false;
        size++;
     }   

}