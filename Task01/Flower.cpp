#include "Flower.hpp"


Flower::Flower(sf::Vector2f pos, sf::Color petal_color)
{
	center.setRadius(12.f);
	center.setPosition({pos.x + 13, pos.y + 13});
	center.setFillColor(sf::Color(0xffec27ff));

	petal.setRadius(25.f);
	petal.setPosition(pos);
	petal.setFillColor(petal_color);

	stem.setSize({ 4, 40 });
	stem.setPosition({pos.x + 23, pos.y+50});
	stem.setFillColor(sf::Color(0x00e436ff));

	leaf.setPointCount(3);
	leaf.setPoint(0, {pos.x - 3 - 4 , pos.y + 7  + 60});
	leaf.setPoint(1, {pos.x + 13 - 4 , pos.y + 0  + 60});
	leaf.setPoint(2, {pos.x + 30 - 4 , pos.y + 10 + 60});
	leaf.setFillColor(sf::Color(0x00e436ff));
}

Flower::~Flower()
{
}

void Flower::draw(sf::RenderWindow* window)
{
	window->draw(leaf);
	window->draw(stem);
	window->draw(petal);
	window->draw(center);
}
