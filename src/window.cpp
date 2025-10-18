#pragma once
#include <SFML/Graphics.hpp>
#include <SFML/Audio.hpp>
#include <SFML/Window.hpp>
#include <iostream>
bool keyPressed(const sf::Event& event,sf::Keyboard::Key key) {
	return ((event.type == sf::Event::KeyPressed) && (event.key.code == key));
}
int main() {
	sf::RenderWindow window(sf::VideoMode(720,720),"Ball Connect");
	bool running = true;
	window.setFramerateLimit(60);
	while (window.isOpen() && running) {
		sf::Event event;
		while (window.pollEvent(event)) {
			if (event.type == sf::Event::Closed) {
				running = false;
				break;
			}
			else if (keyPressed(event,sf::Keyboard::Escape)) {
				running = false;
				break;
			}
		}

		window.clear();
		window.display();
	}
	return 0;
}