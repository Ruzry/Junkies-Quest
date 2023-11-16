#include "PlayerCharacter.h"
#include <iostream>

PlayerCharacter::PlayerCharacter() : Character()
{

}

void PlayerCharacter::init(sf::Vector2f position, sf::Vector2f size)
{
    sprite.setPosition(position);
    sprite.setSize(size);
    sprite.setFillColor(sf::Color::Yellow);
}

void PlayerCharacter::input(Input *input_, float changeInX, float changeInY)
{
    sprite.move(changeInX, changeInY);
}
