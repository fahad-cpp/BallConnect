#pragma once
#include "Window.h"
class Game
{
	Window* window=nullptr;
	bool running=true;
public:
	Game() {
	}
	void run() {
		window = new Window(720, 720, "Ball Connect!");
		while (window->isOpen()) {
			window->handleEvents();
			window->clear();
			window->display();
		}
	}
};