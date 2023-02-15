#pragma once
#include "../GameManager/WindowConnector.h"
#include "../GameManager/ResourceManager.h"


class GameButton :public sf::RectangleShape{
public:
	GameButton();
	~GameButton();

	void Init(std::string name);
	void Update(float deltaTime, sf::Event event);
	void Render(sf::RenderWindow* window);
	bool IsMouseRelease(sf::RenderWindow* window);
	void HandleTouchEvent();
	bool isHandle();

	void setOnClick(void (*Func)());
private:
	void (*m_btnClickFunc)();
	bool m_isHandling;
	std::list<sf::Event> m_queueEvent;
};