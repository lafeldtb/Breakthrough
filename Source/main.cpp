//main.cpp
#include <iostream>
#include <ctime>
#include <SFML/Graphics.hpp>

const int FRAMES_PER_SECOND = 32;
const int MS_PER_FRAME = 1000 / FRAMES_PER_SECOND;

//Event handler
void handleEvent(sf::RenderWindow& window, const sf::Event& e)
{
	if(e.type == sf::Event::Closed)
		window.close();
	else if (e.type == sf::Event::Resized)
	{
		window.setView(sf::View(sf::FloatRect(0, 0, e.size.width, e.size.height)));
	}
}

int main()
{
	sf::RenderWindow window(sf::VideoMode(500, 500), "Breakthrough");
	sf::CircleShape shape1(25);
	shape1.setFillColor(sf::Color::Red);
	shape1.setPosition(window.getSize().x/2-shape1.getRadius(), window.getSize().y/2-shape1.getRadius());

	//shape1.setPosition(window.getSize());
	//Main Loop
	//int count = 0;
	while (window.isOpen())
	{
		sf::Event event;
		//clock_t start = std::clock();
		while (window.pollEvent(event))
		{
			handleEvent(window, event);
		}
		//count++;
		window.clear();
		window.draw(shape1);
		window.display();

		//double duration = (std::clock() - start) / ((double) CLOCKS_PER_SEC/1000);
		//sf::sleep(sf::milliseconds(MS_PER_FRAME - duration));
		//sf::sleep(sf::milliseconds(duration));

	}
	return 0;
}

