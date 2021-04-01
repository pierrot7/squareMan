//
// Created by rootsoo on 17/03/2021.
//

#pragma once

#include<iostream>
#include<ctime>
#include<vector>
#include<sstream>

#include "Player.hpp"
#include "Ball.hpp"

class Game
{
private:
    sf::VideoMode videoMode;
    sf::RenderWindow* window;
    bool endGame;
    bool winGame;
    sf::Event sfmlEvent;

    Player player;

    int points;

    sf::Font font;
    sf::Text guiText;
    sf::Text endGameText;
    sf::Text winGameText;

    std::vector<Ball> Balls;
    float spawnTimerMax;
    float spawnTimer;
    int maxBalls;

    void initVariables();
    void initWindow();
    void initFonts();
    void initText();

public:
    //Constructors and Destructors
    Game();
    ~Game();

    //Accessors
    const bool& getEndGame() const;

    const bool& getWinGame() const;

    //Modifiers

    //Functions
    bool running() const;
    void pollEvents();

    void spawnBalls();
    const int randBallType() const;
    void updatePlayer();
    void updateCollision();
    void updateGui();
    void update();

    void renderGui(sf::RenderTarget* target);
    void render();
};