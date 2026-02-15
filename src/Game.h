#pragma once
#include "Window.h"
typedef unsigned int u32;
class Game
{
	Window* window=nullptr;
public:
	Game();
	~Game();
	void drawGrid(u32 x, u32 y,u32 width,u32 height);
	void update();
	void run();
};