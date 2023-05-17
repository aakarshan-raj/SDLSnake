.PHONY: build
build:
	cd src && g++ main.cpp control.cpp game.cpp renderer.cpp snake.cpp -lSDL2 -o ../build/snake.out

	