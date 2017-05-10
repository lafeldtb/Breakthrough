//main.cpp
#include <SFML/Graphics.hpp>

void handleEvent(const sf::Event& e)
{
	if(e.type == sf::Event::Closed)
		window.close();
}

int main()
{
	sf::RenderWindow window(sf::VideoMode(500, 500), "SFML works!");
	sf::CircleShape shape1(50);
	shape1.setFillColor(sf::Color::Red);

	while (window.isOpen())
	{
		sf::Event event;
		while (window.pollEvent(event))
		{
			//if (event.type == sf::Event::Closed)
				//window.close();
			handleEvent(event);
		}

		window.clear();
		window.draw(shape1);
		window.display();
	}

	return 0;
}
