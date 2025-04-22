#pragma once
#include <SFML/Graphics/View.hpp>
#include <SFML/Graphics/RenderWindow.hpp>
#include <SFML/Window/VideoMode.hpp>
#include <SFML/Window/WindowStyle.hpp>
#include "newheader.h"

struct Game {
    game startMenuV;
   /* sf::RenderWindow window{ VideoMode(1680, 1050), "hello" };
    sf::View view;*/

    enum gameStateEnum {
        startMenuState
    };

    gameStateEnum currentGameState = startMenuState;

    void startMenu(RenderWindow& window);
    void runMenu(game& startMenu, RenderWindow& window, View& view);

    void start();
    void run(game& startMenu, RenderWindow& window, View& view);
};
