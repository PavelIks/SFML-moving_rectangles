#pragma once
#include "my_libs.h"
#include"C_Rectangle.h"
class C_Green_Rectangle : public C_Rectangle
{
public:
	C_Green_Rectangle(int pos_x, int pos_y)
	{
		this->setFillColor(Color::Green);
		this->setOutlineThickness(1);
		this->setOutlineColor(Color::Black);
		this->setPosition(Vector2f(pos_x, pos_y));
		this->setSize(Vector2f(90, 50));
	}

	void virtual move_rectangle() override
	{
		int* r_numb = nullptr;

		r_numb = new int(rand() % 100);

		if (*r_numb < 75)
		{
			this->setPosition(this->getPosition().x - this->_step, this->getPosition().y);
		}
		else if (*r_numb > 75)
		{
			this->setPosition(this->getPosition().x + this->_step, this->getPosition().y);
		}
		delete r_numb;
	}
};