#include "control.h"


void Control::ChangeDirection(Snake &snake,Snake::Direction input, Snake::Direction opposite){
     if(snake.direction != opposite || snake.size == 1) snake.direction = input;
     return; 
}

void Control::HandleInput(bool &running,Snake &snake){

    SDL_Event e;

    while(SDL_PollEvent(&e)){
        if(e.type = SDL_QUIT){
            running = false;
        }
        else{
            switch (e.key.keysym.sym)
            {
            case SDLK_UP:
                ChangeDirection(snake,Snake::Direction::kUp,Snake::Direction::kDown);
                break;
            
            case SDLK_DOWN:
                ChangeDirection(snake,Snake::Direction::kDown,Snake::Direction::kUp);
                break;
            case SDLK_RIGHT:
                ChangeDirection(snake,Snake::Direction::kRight,Snake::Direction::kLeft);
                break;
            case SDLK_LEFT:
                ChangeDirection(snake,Snake::Direction::kLeft,Snake::Direction::kRight);
                break;
            }
        }
    }

}