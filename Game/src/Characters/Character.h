#pragma once

#include <SFML/Graphics.hpp>
#include "Animation/Animation.h"


class Character
{
public:
    Character();

    void init();
    void update(float deltaTime);
    void render(sf::RenderWindow *window);

    sf::Vector2<float> getPosition() {return sprite.getPosition();}
    void setPosition(sf::Vector2<float> position) {sprite.setPosition(position);}
private:
    

protected:

    void animate(float deltaTime);
    sf::RectangleShape sprite;

};
