#include "Character.h"
#include <iostream>

Character::Character()
{

}

/**
	The init function for Characters, override for specific functionality
	@param float for deltaTime for in frame calculations.
*/
void Character::init()
{
 
}

/**
	The update function for Characters, override for specific functionality
	@param float for deltaTime for in frame calculations.
*/
void Character::update(float deltaTime)
{
    animate(deltaTime);
}

/**
	The render function for Characters, call to render characters and override for specific functionality
	@param float for deltaTime for in frame calculations.
*/
void Character::render(sf::RenderWindow *window)
{
    window->draw(sprite);
}

/**
    
	@param float for deltaTime for in frame calculations.
*/
void Character::animate(float deltaTime)
{
    
}
