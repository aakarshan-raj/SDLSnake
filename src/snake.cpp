#include "snake.h"
#include <iostream>
#include <cmath>

void Snake::Update(){

UpdateHead();

}


void Snake::UpdateHead(){

 switch (direction)
 {
  case Direction::UP:
    head_y -= speed;
    break;
 
  case Direction::DOWN:
    head_y += speed;
    break;
 
  case Direction::RIGHT:
    head_x += speed;
    break;
 
  case Direction::LEFT:
    head_x -= speed;
    break;  
 }

 head_x = fmod(head_x+grid_width,grid_width);
 head_y = fmod(head_y+grid_height,grid_height);

}