#pragma once

#include <SFML/Graphics.hpp>
#include "Character.h"
#include "Input/Input.h"


class PlayerCharacter :
    public Character
{
public:
    PlayerCharacter();

    void init(sf::Vector2f position, sf::Vector2f size);
    void input(Input *input_, float changeInX, float changeInY);


private:

};
