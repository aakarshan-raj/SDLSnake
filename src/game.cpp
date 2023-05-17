#include "game.h"


Game::Game(int grid_width,int grid_height):snake(grid_width,grid_height),
                                           mt(dev()),
                                           random_x(0,grid_width),
                                           random_y(0,grid_height) {

}

void Game::run(Control &control,Renderer &render){
     bool runnning = true;


     while(runnning){
         int start = SDL_GetTicks();
         control.HandleInput(runnning,snake);
         Update();
         render.Render(snake,food);
         int end = SDL_GetTicks();

         if(end-start < 70){
            std::cout<<end<<"-"<<start<<std::endl; 
            SDL_Delay(70-(end-start));
         }
     }
}

void Game::Update(){

  snake.Update();
  PlaceFood();

}

void Game::PlaceFood(){

   int x = random_x(mt);
   int y = random_y(mt);

   food.x = x;
   food.y = y;
}