

#include "control.h"


  void Control::ChangeDirection(Snake &snake, Snake::Direction input,
                       Snake::Direction opposite){
                snake.direction = input;
                return;
                       }
  void Control::HandleInput(bool &running,Snake &snake){
    
     SDL_Event e;

     while(SDL_PollEvent(&e)){
          if(e.type == SDL_QUIT){
              running = false;
          }
          else{
              switch (e.key.keysym.sym)
              {
              case SDLK_UP:
                ChangeDirection(snake,Snake::Direction::UP,Snake::Direction::DOWN);
                break;
              
              case SDLK_DOWN:
                ChangeDirection(snake,Snake::Direction::DOWN,Snake::Direction::UP);
                break;
              case SDLK_RIGHT:
                ChangeDirection(snake,Snake::Direction::RIGHT,Snake::Direction::LEFT);
                break;
              case SDLK_LEFT:
                ChangeDirection(snake,Snake::Direction::LEFT,Snake::Direction::RIGHT);
                break;    
              }
          }
     }

  }
