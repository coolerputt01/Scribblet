#include <SFML/Graphics.hpp>
#include <optional>

int main() {
    sf::RenderWindow window(sf::VideoMode({800, 600}), "SFML Drawing App");

   const sf::Font font("/data/data/com.termux/files/home/scribblet/DejaVuSans.ttf");
   sf::Text text(font,"Hello World!",50);
    while (window.isOpen()) {
        while (auto event = window.pollEvent()) {
            if (event->is<sf::Event::Closed>())
                window.close();
        }

        window.clear(sf::Color::White);
        window.display();
    }

    return 0;
}
