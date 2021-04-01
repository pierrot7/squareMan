//
// Created by rootsoo on 17/03/2021.
//

#pragma once

#include <SFML/Graphics.hpp>
#include <SFML/System.hpp>
#include <SFML/Window.hpp>
#include <SFML/Audio.hpp>
#include <SFML/Network.hpp>

enum BallTypes {DEFAULT = 0, DAMAGING, HEALING, NROFTYPES};


class Ball {

private:
    sf::CircleShape shape;
    int type;

    void initShape(const sf::RenderWindow& window);

public:
    Ball(const sf::RenderWindow& window, int type);
    virtual ~Ball();

    //Accessor
    sf::CircleShape getShape() const;
    const int& getType() const;

    //Functions
    void update();
    void render(sf::RenderTarget& target);
};

