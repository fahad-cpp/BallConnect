#pragma once
#include <SFML/Window.hpp>
#include <SFML/Graphics.hpp>
#include <string>
class Window
{
	unsigned int width, height;
	const std::string name;
	sf::RenderWindow window;
	sf::Event event;
public:
	Window(unsigned int width=720,unsigned int height=720,const std::string& name="") {
		window.setFramerateLimit(60);
		window.create(sf::VideoMode(width, height), name);
		event = {};
	}
	~Window() {
		window.close();
	}

	void handleEvents();
	void display();
	void clear(sf::Color color = sf::Color(0,0,0));
	bool isOpen();
};