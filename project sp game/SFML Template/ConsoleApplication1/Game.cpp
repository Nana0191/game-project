#include <SFML/Graphics/Rect.hpp>
#include <SFML/Graphics/RenderWindow.hpp>
#include "newheader.h"
#include "Game.h"

void Game::startMenu(RenderWindow&window) {
    // game startMenu

        startMenuV.Start(window);
    
}

void Game::runMenu(game& startMenu, RenderWindow& window,View& view) {
    startMenu.Update(window, view);
}

void Game::run(game& startMenu, RenderWindow& window, View& view) {
    while (window.isOpen()) {

     
            runMenu(startMenu,window,view);
            startMenu.Draw(window);
        
    }
}
