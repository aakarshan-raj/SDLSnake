#include "game.h"



void Game::run(Control &control,Renderer &render){
     bool runnning = true;


     while(runnning){
         int start = SDL_GetTicks();
         control.HandleInput(runnning,snake);
         Update();
         render.Render(snake);
         int end = SDL_GetTicks();

         if(end-start < 70){
            std::cout<<end<<"-"<<start<<std::endl; 
            SDL_Delay(70-(end-start));
         }
     }
}

void Game::Update(){

  snake.Update();

}