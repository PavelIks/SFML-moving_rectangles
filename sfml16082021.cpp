#include <iostream>
#include <thread>
#include <chrono>

#include <SFML/Graphics.hpp>

#include "C_Rectangle.h"
#include "C_Red_Rectangle.h"
#include "C_Green_Rectangle.h"
#include "C_Blue_Rectangle.h"

using namespace sf;

void move_rect(C_Rectangle& obj)
{
	while (true)
	{
		obj.move_rectangle();
		std::this_thread::sleep_for(std::chrono::seconds(1));
	}
}

//void move_horizont(C_Rectangle& obj) {
//	while (true)
//	{
//		obj.move_horizontal();
//		std::this_thread::sleep_for(std::chrono::seconds(1));
//	}
//}

int main()
{
	C_Red_Rectangle red_rectangle(145.f, 30.f);
	C_Green_Rectangle green_rectangle(145.f, 130.f);
	C_Blue_Rectangle blue_rectangle(145.f, 230.f);

	const int SIZE = 3;
	std::thread th_s[SIZE];

	th_s[0] = std::thread(move_rect, std::ref(blue_rectangle));
	th_s[1] = std::thread(move_rect, std::ref(green_rectangle));
	th_s[2] = std::thread(move_rect, std::ref(red_rectangle));
	 
	RenderWindow window(VideoMode(400, 400), "Rectangle");
	while (window.isOpen())
	{
		Event event;
		window.clear(Color(154, 205, 50, 250));
		while (window.pollEvent(event))
		{

			if (event.type == Event::Closed)
			{
				window.close();
			}
		}
		
		window.draw(red_rectangle);
		window.draw(green_rectangle);
		window.draw(blue_rectangle);

		window.display();
	}
}