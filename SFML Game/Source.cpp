#include "SFML/Graphics.hpp"

using namespace sf;

int main() {

	RenderWindow window(VideoMode(600, 600), "IKR");
	Event ev;

	while (window.isOpen())
	{
		while (window.pollEvent(ev))
		{
			if (ev.type == Event::Closed)
				window.close();
		}
	}

	return 0;
}