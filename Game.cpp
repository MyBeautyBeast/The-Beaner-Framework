#include "Game.h"

Game::Game(HWND hWnd, KeyboardServer& kServer, const MouseServer& mServer)
	: gfx(hWnd),
	audio(hWnd),
	kbd(kServer),
	mouse(mServer)
{
}

Game::~Game()
{
}

void Game::Go()
{
	UpdateModel();
	gfx.BeginFrame();
	ComposeFrame();
	gfx.EndFrame();
}

void Game::UpdateModel()
{
}

void Game::ComposeFrame()
{
}
