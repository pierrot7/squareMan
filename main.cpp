#include <iostream>


#include "Game.hpp"

//using namespace sf;

int main()
{
    //Initialize random seed
    srand(static_cast<unsigned>(time(0)));

    //Initialize game object
    Game game;

    // loop
    while (game.running())
    {
        game.update();
        game.render();
    }

    return 0;
}
