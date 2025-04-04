#pragma once

#include <SFML/Graphics.hpp>


class Flower {
public:
	Flower(sf::Vector2f pos, sf::Color petal_color=sf::Color::Red);
	~Flower();

	void draw(sf::RenderWindow* window);

private:
	sf::CircleShape center;
	sf::CircleShape petal;
	sf::RectangleShape stem;
	sf::ConvexShape leaf;
};