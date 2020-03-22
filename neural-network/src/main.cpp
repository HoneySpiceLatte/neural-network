#include <SDL.h>

#include <iostream>

const int WIDTH = 800;
const int HEIGHT = 600;

int main(int argc, char* argv[])
{
    if (SDL_Init(SDL_INIT_EVERYTHING) < 0)
        std::cout << "SDL failed to initialize: " << SDL_GetError() << std::endl;

    SDL_Window* window = SDL_CreateWindow("Application", // Window Title
        SDL_WINDOWPOS_CENTERED,
        SDL_WINDOWPOS_CENTERED, // Window Pos
        WIDTH,
        HEIGHT, // Window Size
        SDL_WINDOW_ALLOW_HIGHDPI // Flags
    );

    if (window == NULL) {
        std::cout << "Window failed to create: " << SDL_GetError() << std::endl;
        return 1;
    }

    SDL_Event windowEvent;

    while (true) {
        if (SDL_PollEvent(&windowEvent)) {
            switch (windowEvent.type) {
            case SDL_QUIT:
                goto break_loop;
            }
        }
    }

break_loop:

    SDL_DestroyWindow(window);
    SDL_Quit();

    return EXIT_SUCCESS;
}