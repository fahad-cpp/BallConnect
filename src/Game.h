#pragma once
#include "Window.h"
class Game
{
	Window* window=nullptr;
public:
	Game() {
	}
	~Game() {
	}
	void run() {
		window = new Window(720, 720, "Ball Connect!");
		while (window->isOpen()) {
			window->handleEvents();
			window->clear(sf::Color(255,255,255));
			window->display();
		}
		delete window;
	}
};