#pragma once
#include "SFML/Graphics.hpp"
#include <iostream>

class Player
{
private:
	const unsigned window_width = 800;
	const unsigned window_height = 600;

	//create player shape
	std::unique_ptr<sf::RectangleShape> shape;
public:

	Player();
	~Player();
	void move();
	sf::Shape& getShape();
};

