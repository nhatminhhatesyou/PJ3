#include "GameButton.h"

GameButton::GameButton()
{
	m_isHandling = false;
}

GameButton::~GameButton()
{
}

void GameButton::Init(std::string name)
{
	this->setTexture(DATA->getTexture("btn/" + name));
	this->setSize(sf::Vector2f(100, 100));
}

void GameButton::Update(float deltaTime, sf::Event event)
{
	/*if (sf::Mouse::isButtonPressed(sf::Mouse::Left)) {
		printf("Click chuot nek\n");
		if (event.type == sf::Event::MouseButtonReleased)
			{
				HandleTouchEvent();
				printf("Release chuot nek\n");
			}
		
	}*/

	if (event.type == sf::Event::MouseButtonReleased)
			{
				HandleTouchEvent();
				printf("Release chuot nek\n");
			}
				
}

void GameButton::Render(sf::RenderWindow* window)
{
	window->draw(*this);
	
}

bool GameButton::IsMouseRelease(sf::RenderWindow* window)
{

	return false;
}

void GameButton::HandleTouchEvent()
{
		if (this->getGlobalBounds().contains((sf::Vector2f)sf::Mouse::getPosition(*WConnect->getWindow())))
		{
			m_isHandling = true;
			m_btnClickFunc();
		}
}

bool GameButton::isHandle()
{
	return m_isHandling;
}

void GameButton::setOnClick(void(*Func)())
{
	m_btnClickFunc = Func;
}
