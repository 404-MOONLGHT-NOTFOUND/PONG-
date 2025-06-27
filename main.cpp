#include <SFML/include/Graphics.hpp>

int main() {
    sf::RenderWindow window(sf::VideoMode(800, 600), "Ma fenêtre SFML");

    while (window.isOpen()) {
        sf::Event event;
        while (window.pollEvent(event)) {
            if (event.type == sf::Event::Closed)
                window.close();
        }

        window.clear(sf::Color::Black);

        // Dessine ici tes boutons, textes, etc.

        window.display();
    }

    return 0;
}

