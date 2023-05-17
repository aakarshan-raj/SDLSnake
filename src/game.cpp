#include "game.h"



void Game::run(Control &control,Renderer &render){
     bool runnning = true;


     while(runnning){
         control.HandleInput(runnning,snake);
         Update();
         render.Render(snake);
     }
}

void Game::Update(){

  snake.Update();

}