#include "Window.h"

void Window:: handleEvents() {
	while (window.pollEvent(event)) {
		if (event.type == sf::Event::Closed) {
			window.close();
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
}

bool Window::isOpen() {
	return window.isOpen();
}
