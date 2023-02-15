#pragma once
#include "GameStateBase.h"

class GSMenu : public GameStateBase {
public:
	GSMenu();
	virtual ~GSMenu();

	void Exit();
	void Pause();
	void Resume();

	void Init();
	void Update(float deltaTime, sf::Event event);
	void Render(sf::RenderWindow* window);
private:
	std::list<GameButton*> m_ListBtn;
	sf::Sprite m_Background;
};