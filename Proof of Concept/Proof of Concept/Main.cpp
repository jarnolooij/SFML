#include "SFML/Graphics.hpp"
#include <iostream>
int main() 
{
	//create a window thats called buas intake with the widht and the height.
	sf::RenderWindow window(sf::VideoMode(800, 600), "Proof of concept", sf::Style::Close | sf::Style::Titlebar);

	//do things when the window is open.
	while (window.isOpen()) {

		//close window
		sf::Event evnt;
		while (window.pollEvent(evnt)) {

			if (evnt.type == evnt.Closed) {

				window.close();
			}
		}

		std::cout << "Hello World!";

		//clear the screen
		window.clear();

		//display objects
		window.display();
	}
	return 0;
}