//#include"newheader.h"
//#include "FileName.h"
//int main()
//{
//    game gamelogic;
//    sf::RenderWindow window(sf::VideoMode(gamelogic.resolution.x, gamelogic.resolution.y), "between the edges ");  //1680,1050
//    //View view(FloatRect(0, 0, gamelogic.resolution.x, gamelogic.resolution.y));
//    //    // to make view has the screen from position (0,0)to (resolution.xand .y)
//    /*window.setView(view);
//
//
//    gamelogic.Start(window);*/
//
//
//    Clock clock;
//     Texture textureplayer;
//     textureplayer.loadFromFile("../assests/main menu/still.png");
//     Sprite player;
//     player.setTexture(textureplayer);
//     player.setPosition(200, 700);
//     Vector2f poaition(500, 400);
//     Vector2f point1(600, 400);
//     Vector2f point2(800, 400);
//     gamelogic.monster1.start(poaition,point1,point2);
//
//
//    while (window.isOpen())
//    {
//
//        while (window.pollEvent(gamelogic.event)) {
//            if (Keyboard::isKeyPressed(Keyboard::Left))
//                player.move(-10, 0);
//            if (Keyboard::isKeyPressed(Keyboard::Right))
//                player.move(10, 0);
//            if (Keyboard::isKeyPressed(Keyboard::Up))
//                player.move(0,-10);
//            if (Keyboard::isKeyPressed(Keyboard::Down))
//                player.move(0,10);
//
//
// }
// gamelogic.monster1.update(player, clock);
//
//
// window.clear();
//
// window.draw(gamelogic.monster1.monstersprite);
// window.draw(player);
//
// window.display();      
// /*gamelogic.deltaTime = clock.restart().asSeconds();*/
//
//
//
//
//       /* gamelogic.checkpause();
//        if (gamelogic.ispause == false) {
//            gamelogic.Update(window, view);
//        }
//        gamelogic.Draw(window);*/
//
//
//
//
//
//    }    return 0;
//}

#include"newheader.h"

int main() {
   

    gameStateEnum currentGameState = startMenuState;

    game gamelogic;
    sf::RenderWindow window(sf::VideoMode(gamelogic.resolution.x, gamelogic.resolution.y), "between the edges ");  //1680,1050
    View view(FloatRect(0, 0, gamelogic.resolution.x, gamelogic.resolution.y));
    // to make view has the screen from position (0,0)to (resolution.xand .y)
    window.setView(view);
    Clock clock;
    if (currentGameState == startMenuState) {
        gamelogic.Start(window);
        while (window.isOpen()) {
            gamelogic.deltaTime = clock.restart().asSeconds();
            gamelogic.checkpause();
            if (gamelogic.ispause == false) {
                gamelogic.Update(window, view, currentGameState);
            }
            gamelogic.Draw(window);
        }

        if (currentGameState == chooseplayerstate) {


            // code
        }



    }return 0;
}

