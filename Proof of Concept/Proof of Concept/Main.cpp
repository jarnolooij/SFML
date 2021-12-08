#include "SFML/Graphics.hpp"
#include <iostream>
#include "Player.h"

Player player;

int main()
{
	//create a window thats called buas intake with the widht and the height.
	sf::RenderWindow window(sf::VideoMode(800, 600), "Proof of concept Jarno Looij MeesterProef", sf::Style::Close | sf::Style::Titlebar);
	std::cout << "Hello World!";

	//do things when the window is open.
	while (window.isOpen()) {

		//close window
		sf::Event evnt;
		while (window.pollEvent(evnt)) {

			if (evnt.type == evnt.Closed) {

				window.close();
			}
		}

		//clear the screen
		window.clear();

		//move player
		player.move();

		//draw objects
		window.draw(player.getShape());

		//display objects
		window.display();
	}
	return 0;
}