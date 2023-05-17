#include "game.h"
#include "renderer.h"
#include "control.h"
#include "snake.h"


int main(){


Renderer render{640,640,32,32};
Control control;
Game game{32,32};
game.run(control,render);

}