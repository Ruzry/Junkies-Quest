#include "Game.h"

Game::Game()
{

}

/**
	Clean up function TODO
*/
void Game::onExit()
{
	//delete input;
	input = NULL;

	//delete window;
	window = NULL;
}

/**
	Initialize the variable needed for the game class.
	@param sf::RenderWindow the window for objects to be drawn too.
	@param Input class to control user input.
*/
void Game::init(sf::RenderWindow *window_, Input *input_)
{
	input = input_;
	window = window_;

	blue.setSize(sf::Vector2f(CELL_SIZE, CELL_SIZE));
	blue.setFillColor(sf::Color::Blue);
	
	black.setSize(sf::Vector2f(CELL_SIZE, CELL_SIZE));
	black.setFillColor(sf::Color::Black);

	yellow.setSize(sf::Vector2f(CELL_SIZE, CELL_SIZE));
	yellow.setFillColor(sf::Color::Yellow);

	cyan.setSize(sf::Vector2f(CELL_SIZE, CELL_SIZE));
	cyan.setFillColor(sf::Color::Cyan);

	view.setCenter(sf::Vector2f(350.f, 300.f));
	view.setSize(sf::Vector2f(430.f, 400.f));
	displayView = true;
}

/**
	The update function for the Game state
	@param float for deltaTime for in frame calculations.
*/
void Game::update(float deltaTime_)
{
	deltaTime = deltaTime_;


	if (input->isKeyDown(sf::Keyboard::R))
	{
		window->setView(window->getDefaultView());
	}

	if (input->isKeyDown(sf::Keyboard::W))
	{
		input->setKeyUp(sf::Keyboard::W);

		if (displayView)
		{
			displayView = false;
			window->setView(window->getDefaultView());
		}
		else
		{
			displayView = true;
		}
	}

	if (input->isKeyDown(sf::Keyboard::C))
		input->setKeyUp(sf::Keyboard::C);

	if (input->isKeyDown(sf::Keyboard::S))
		changeX = -(movementSpeed * deltaTime);
	else if (input->isKeyDown(sf::Keyboard::F))
		changeX = (movementSpeed * deltaTime);
	else 
		changeX = 0.f;

	if (input->isKeyDown(sf::Keyboard::E))
		changeY = -(movementSpeed * deltaTime);
	else if (input->isKeyDown(sf::Keyboard::D))
		changeY = (movementSpeed * deltaTime);
	else
		changeY = 0.f;

	view.setCenter(0, 0);
}

/**
	The render function.
*/
void Game::render()
{
	int multi = 0;

	drawGrid(true);
	
	if (displayView == true)
		window->setView(view);

	//window->draw(player);

}

void Game::drawGrid(bool render)
{
	if (render)
	{
		for (int i = 0; i < COLUMNS; i++)
		{
			sf::Vertex horizontalLine[] = {{{(i * CELL_SIZE), 0}, sf::Color::Cyan}, {{(i * CELL_SIZE), WINDOW_HEIGHT}, sf::Color::Cyan}};
			window->draw(horizontalLine, 2, sf::Lines);

			for (int j = 0; j < ROWS; j++) 
			{
				sf::Vertex verticalLine[] = {{{0, (j * CELL_SIZE)}, sf::Color::Cyan}, {{WINDOW_WIDTH, (j * CELL_SIZE)}, sf::Color::Cyan}};
				window->draw(verticalLine, 2, sf::Lines);
			}
		}
	}
}

/**
	Returns a grid Location from the given window pixel location.
	@param sf::vector2f the player position to be converted.
*/
sf::Vector2i Game::getGridPosition(sf::Vector2f playerPosition)
{
	int i = playerPosition.x / 16;
	int j = playerPosition.y / 16;

	sf::Vector2i gridLocation(i, j);

	return gridLocation;
}

