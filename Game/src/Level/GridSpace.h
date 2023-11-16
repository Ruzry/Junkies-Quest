#pragma once

#include <SFML/Graphics.hpp>
#include <vector>
#include "GridObject.h"

/*
    Represents a space on the grid, wall collision will be 
*/
class GridSpace : 
    public sf::Sprite
{
public:
    GridSpace();

    

private:
    bool isAccessible = true;
    GridObject *objectInSpace;

protected:

};
