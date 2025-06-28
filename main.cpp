/*
Author: Lucas / MOONLGHT
Name PONG!

Statut: Very Work In Progress
*/

#include <SFML/include/Graphics.hpp>

int main() {
    sf::RenderWindow window(sf::VideoMode(800, 600), "PONG!");

    while (window.isOpen()) {
        sf::Event event;
        while (window.pollEvent(event)) {
            if (event.type == sf::Event::Closed)
                window.close();
        }

        window.clear(sf::Color::Black);

        window.display();
    }

    return 0;
}

