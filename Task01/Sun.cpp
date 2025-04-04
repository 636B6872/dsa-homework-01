#include "Sun.hpp"

Sun::Sun(float size, sf::Vector2f pos)
{
	shape.setRadius(size);
	shape.setPosition(pos);
	shape.setFillColor(sf::Color(0xffec27ff));
}

Sun::~Sun()
{
}

void Sun::update()
{
    float elapsedTime = clock.getElapsedTime().asSeconds();
    float scale = std::sin(elapsedTime);
    float newRadius = shape.getRadius() + scale * 0.05f;

    shape.setRadius(newRadius);
}

void Sun::draw(sf::RenderWindow* window)
{
    this->update();
    window->draw(shape);
}
