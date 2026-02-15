#include "Game.h"
int main() {
	Game game;
	game.run();
}

Game::Game() {
	window = new Window(720, 720, "Ball Connect!");
}

Game::~Game() {
	delete window;
}

void Game::drawGrid(u32 x, u32 y,u32 width,u32 height) {
	for (int i = 0; i < x + 1; i++) {
		sf::RectangleShape rect;
		rect.setSize({ 10.f,(float)window->height });
		rect.setPosition({ float((window->width / (x)) * (i + 1)),0.f});
		rect.setFillColor(sf::Color{ 255,255,255 });
		window->draw(rect);
	}
	for (int i = 0; i < y + 1; i++) {
		sf::RectangleShape rect;
		rect.setSize({ float(window->width),10.f});
		rect.setPosition({ 0.f,float((window->height / (y)) * (i + 1)) });
		rect.setFillColor(sf::Color{ 255,255,255 });
		window->draw(rect);
	}
}

void Game::update() {
	drawGrid(8, 8,window->width,window->height);
}

void Game::run() {
	while (window->isOpen()) {
		window->handleEvents();
		window->clear(sf::Color(0, 0, 0));
		update();
		window->display();
	}
}