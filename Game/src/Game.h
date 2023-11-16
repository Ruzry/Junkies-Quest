#pragma once

#include <SFML/Graphics.hpp>
#include <vector>
#include "Input/Input.h"
#include "Characters/PlayerCharacter.h"

class Game
{
public:
	Game();

	void init(sf::RenderWindow *window, Input *input);
	void onExit();
	void update(float deltaTime);
	void render();

private:
	sf::Vector2i getGridPosition(sf::Vector2f playerPosition);
	void drawGrid(bool render);

	//PlayerCharacter player;

	Input *input;
	sf::RenderWindow *window;
	float deltaTime;

	sf::RectangleShape blue;
	sf::RectangleShape black;
	sf::RectangleShape yellow;
	sf::RectangleShape cyan;

	bool displayView;
	sf::View view;
	float changeX, changeY;
	float movementSpeed = 150.f;

	const int WINDOW_WIDTH = 960, WINDOW_HEIGHT = 800, COLUMNS = 60, ROWS = 50;
	const float CELL_SIZE = 16.f;
};

