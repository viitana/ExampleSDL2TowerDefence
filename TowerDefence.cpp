#include "SDL.h"

#include <unistd.h> 

#include "TowerDefence.h"

int main()
{
	std::cout << "Hello World! Let's try and create a window using SDL2" << std::endl;

	// Window handle
	SDL_Window* window = NULL;

	// Initialize SDL
	if (SDL_Init(SDL_INIT_VIDEO) != 0)
	{
		std::cout << "SDL failed to initialize: " << SDL_GetError() << std::endl;
		return 1;
	}

	// Actually make the window
	window = SDL_CreateWindow("Super cool tower defence", // title
		SDL_WINDOWPOS_UNDEFINED, // where to place the window
		SDL_WINDOWPOS_UNDEFINED, // where to place the window
		1280, // width
		720, // height
		0
	);

	if (window == NULL)
	{
		std::cout << "Failed to create SDL window: " << SDL_GetError() << std::endl;
		return 1;
	}

	// Wait for a bit and then nuke the window & exit
	sleep(5);
	SDL_DestroyWindow(window);

	return 0;
}
