#include "Level.h"

Level::Level()
{

}

void Level::initGrid()
{

}

void Level::render(sf::RenderWindow *window)
{
    for (int i = 0; i < size(); i++)
        window->draw(at(i));
}
