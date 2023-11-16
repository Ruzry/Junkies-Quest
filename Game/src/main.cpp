/*
	2D Action Adventure Game, following a Junkies quest for heroin.
	@Author Ruaraidh Canaway
*/

#include <SFML/Graphics.hpp>
#include "Input/Input.h"
#include "Game.h"

const int WINDOW_WIDTH = 960, WINDOW_HEIGHT = 800;

int main()
{
	// Create window
	sf::RenderWindow window(sf::VideoMode(WINDOW_WIDTH, WINDOW_HEIGHT), "Junkies Quest");
	window.setPosition(sf::Vector2i(700, 150));
	window.setFramerateLimit(60);

	//Input Control
	Input input;

	Game junkiesQuest;
	junkiesQuest.init(&window, &input);

	//For Delta time
	sf::Clock clock;
	float deltaTime;

	//Game Loop
	while (window.isOpen())
	{
		//Calculate delta time. How much time has passed and since last calculated. Restart clock. 
		deltaTime = clock.restart().asSeconds();

		sf::Event event;
		while (window.pollEvent(event))
		{
			switch (event.type)
			{
			case sf::Event::Closed:
				window.close();
				break;
			case sf::Event::Resized:
				window.setView(sf::View(sf::FloatRect(0.f, 0.f,
					(float)event.size.width, (float)event.size.height)));
				break;
			case sf::Event::KeyPressed:
				// update input class
				input.setKeyDown(event.key.code);
				break;
			case sf::Event::KeyReleased:
				//update input class
				input.setKeyUp(event.key.code);
				break;
			case sf::Event::MouseMoved:
				//update input class
				input.setMousePosition(event.mouseMove.x,
					event.mouseMove.y);
				break;
			case sf::Event::MouseButtonPressed:
				if (event.mouseButton.button == sf::Mouse::Left)
				{
					//update input class
					input.setMouseLeftDown(true);
				}
				break;
			case sf::Event::MouseButtonReleased:
				if (event.mouseButton.button == sf::Mouse::Left)
				{
					//update input class
					input.setMouseLeftDown(false);
				}
				break;
			default:
				// don't handle other events
				break;
			}
		}

		if (input.isKeyDown(sf::Keyboard::Escape))
		{
			input.setKeyUp(sf::Keyboard::Escape);
			window.close();
		}

		window.clear();
		junkiesQuest.render();
		window.display();
	}

	return 0;
}
