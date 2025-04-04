#pragma once

#include <SFML/Graphics.hpp>


class Sun{
public:
	Sun(float size, sf::Vector2f pos);
	~Sun();

	void draw(sf::RenderWindow* window);

private:
	void update();
	sf::Clock clock;

	sf::CircleShape shape;
};