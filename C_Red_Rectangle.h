#pragma once
#include "my_libs.h"
#include"C_Rectangle.h"
class C_Red_Rectangle :
	public C_Rectangle
{
public:
	C_Red_Rectangle(int pos_x, int pos_y)
	{
		this->setFillColor(Color::Red);
		this->setOutlineThickness(1);
		this->setOutlineColor(Color::Black);
		this->setPosition(Vector2f(pos_x, pos_y));
		this->setSize(Vector2f(90, 50));
	}

	void virtual move_rectangle() override
	{
		return;
	}
};