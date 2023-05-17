# SDLSnake

## Game Loop

1. Input (Control class)
2. Update (Game Class)
3. Render (Renderer Class)

## 4 classes
1. Snake
2. Renderer
3. Control
4. Game

 All these objects are called in Game Class object and they manipulate the Snake Object

 The rendering is handled by Renderer class, we pass snake object and food SDL_Point to it
 its important to know that at each render cycle, all the screen is cleared and rendered again even if the objects are at constant, without doing that our game would look like this

![gif](doc/psss.gif)
