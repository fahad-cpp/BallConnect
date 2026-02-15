#include "Window.h"

void Window:: handleEvents() {
	while (window.pollEvent(event)) {
		if (event.type == sf::Event::Closed) {
			window.close();
		}
		else if (event.type == sf::Event::Resized) {
			height = window.getSize().y;
			width = window.getSize().x;
		}
	}
}

void Window::display()
{
	window.display();
}

void Window::clear(sf::Color color)
{
	window.clear(color);
	height = window.getSize().y;
	width = window.getSize().x;
}

bool Window::isOpen() {
	return window.isOpen();
}

void Window::draw(const sf::Drawable& drawable) {
	window.draw(drawable);
}