#include"newheader.h"

int main()
{
    game gamelogic;
    sf::RenderWindow window(sf::VideoMode(gamelogic.resolution.x, gamelogic.resolution.y), "between the edges ");  //1680,1050
    View view(FloatRect(0, 0, gamelogic.resolution.x, gamelogic.resolution.y));
    // to make view has the screen from position (0,0)to (resolution.xand .y)
    window.setView(view);
    gamelogic.Start(window);
    Clock clock;

    while (window.isOpen())
    {




        gamelogic.deltaTime = clock.restart().asSeconds();

        gamelogic.checkpause();
        if (gamelogic.ispause == false) {
            gamelogic.Update(window, view);

            gamelogic.Draw(window);

        }
    }
    return 0;
}
