#pragma once

#include <SFML/Graphics.hpp>
#include <vector>
#include "GridSpace.h"
#include "GridObject.h"

/*
    Class to control the levels for the game, A vector of gridObjects that are the SFMl Spites to be rendered in game.
*/
class Level : std::vector<GridObject>
{
public:
    Level();
    void initGrid();
    void render(sf::RenderWindow *window);

protected:

private:
    std::vector<std::vector<GridObject>> levelGrid = {};


//Loop through string array of characters representing an object to be rendered, work on assumption that level json has been verified
//by level creator program and that all grid spaces are accounted for and fill level itself and the levelGrid array.
//First Create array of GridSpaces based on the levels overall size and then when initializing the level objects,
//update the grid spaces they apply to

};
