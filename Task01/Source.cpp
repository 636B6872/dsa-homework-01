#include <SFML/Graphics.hpp>

#include "Flower.hpp"
#include "Sun.hpp"


int main()
{
    sf::RenderWindow window(sf::VideoMode({ 400, 400}), "Flower");
    window.setFramerateLimit(60);

    sf::RectangleShape ground({ 400, 150 });
    ground.setPosition({ 0, 250 });
    ground.setFillColor(sf::Color(0x008748ff));

    Flower flower1({ 50, 270 }, sf::Color(0x76428aff));
    Flower flower2({ 80, 300 }, sf::Color(0xdc0042ff));
    Flower flower3({ 230, 230 }, sf::Color(0xdc8100ff));
    Flower flower4({ 285, 290 }, sf::Color(0xff629bff));

    Sun sun(70, { -60, -60 });

    while (window.isOpen())
    {
        while (const std::optional event = window.pollEvent())
        {
            if (event->is<sf::Event::Closed>()) {
                window.close();
            }
        }

        window.clear(sf::Color(0x29adffff));
        window.draw(ground);

        flower1.draw(&window);
        flower2.draw(&window);
        flower3.draw(&window);
        flower4.draw(&window);

        sun.draw(&window);

        window.display();
    }
}