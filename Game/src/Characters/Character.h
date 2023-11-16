#pragma once

#include <SFML/Graphics.hpp>
#include "Animation/Animation.h"


class Character
{
public:
    Character();

private:
    sf::RectangleShape sprite;

protected:
    void update(float deltaTime);
    void render();
    void animate(float deltaTime);

};
