#pragma once
#include "GameStateManager/GameStateMachine.h"
#include "GameManager/ResourceManager.h"

class Application {
public:
	void Run();
	~Application();
private:
	void Init();
	void Update(float deltaTime, sf::Event event);
	void Render();
private:
	sf::RenderWindow* m_window;
};