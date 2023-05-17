#include "game.h"
#include "renderer.h"
#include "control.h"
#include "snake.h"


int main(){


Renderer render{940,840,40,40};
Control control;
Game game{40,40};
game.run(control,render);

}