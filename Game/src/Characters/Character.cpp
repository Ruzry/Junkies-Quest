#include "Character.h"

Character::Character()
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
void Character::render()
{
    
}

/**
    
	@param float for deltaTime for in frame calculations.
*/
void Character::animate(float deltaTime)
{
    
}
