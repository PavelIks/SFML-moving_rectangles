#pragma once
#include "my_libs.h"
class C_Rectangle :
    public RectangleShape
{
protected:
	int _step;
public:
	C_Rectangle()
	{
		this->_step = 10;
	}
	void virtual move_rectangle() = 0;
	/*void move_rectangle() {
		int* r_numb = nullptr;


		r_numb = new int(rand() % 100);

		if (*r_numb < 25)
			this->setPosition(this->getPosition().x, this->getPosition().y + this->_step);
		else if (*r_numb > 25 && *r_numb < 50)
			this->setPosition(this->getPosition().x, this->getPosition().y - this->_step);
		else if (*r_numb > 50 && *r_numb < 75)
			this->setPosition(this->getPosition().x - this->_step, this->getPosition().y);
		else if (*r_numb > 75)
			this->setPosition(this->getPosition().x + this->_step, this->getPosition().y);
		delete r_numb;

	}*/

	/*void move_horizontal() {
		int* r_numb = nullptr;


		r_numb = new int(rand() % 100);

		if (*r_numb < 75)
			this->setPosition(this->getPosition().x - this->_step, this->getPosition().y);
		else if (*r_numb > 75)
			this->setPosition(this->getPosition().x + this->_step, this->getPosition().y);
		delete r_numb;

	}*/

};

