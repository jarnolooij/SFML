#include "Player.h"

Player::Player()
{
	//set te shape position and the color of the object
	shape = std::make_unique<sf::RectangleShape>(sf::RectangleShape(sf::Vector2f(10.0f, 10.0f)));
	shape->setPosition(sf::Vector2f(0.0f, 100.0f));
	shape->setFillColor(sf::Color::Green);
}

Player::~Player()
{
}

void Player::move()
{
	//have the player move with WASD keys.
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::Key::W)) {
		shape->move(0.0f, -0.1f);
	}
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::Key::A)) {
		shape->move(-0.1f, 0.0f);

	}
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::Key::S)) {
		shape->move(0.0f, 0.1f);
	}
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::Key::D)) {
		shape->move(0.1f, 0.0f);
	}

	//screen collison

	//left collison
	if (shape->getPosition().x < 0.f)
		shape->setPosition(0.f, shape->getPosition().y);
	//top collison
	if (shape->getPosition().y < 0.f)
		shape->setPosition(shape->getPosition().x, 0.f);
	//rignt collison
	if (shape->getPosition().x + shape->getGlobalBounds().width > window_width)
		shape->setPosition(window_width - shape->getGlobalBounds().width, shape->getPosition().y);
	//bottom collison
	if (shape->getPosition().y + shape->getGlobalBounds().height > window_height)
		shape->setPosition(shape->getPosition().x, window_height - shape->getGlobalBounds().height);
}

sf::Shape& Player::getShape()
{
	return*shape;
}
