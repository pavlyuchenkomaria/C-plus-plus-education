#include "pch.h"
#include <iostream>
#define _USE_MATH_DEFINES
#include <math.h>


class angle
{
	float ang;
public:
	angle();

	angle(float ang);

	void input();
	void output();
	float convert_to_radians();
	float find_sin();
	float find_cos();
	bool operator == (float alfa1); // alfa1 - another angle
	bool operator > (float alfa1);
	bool operator < (float alfa1);
	void sum(float alfa1);
	void dif(float alfa1);
	void mult(float n); // n - const
	friend angle operator+(angle& ang1, angle& ang2) {
		return angle(ang1.ang + ang2.ang);
	};
};
angle::angle() {
		ang = 0;
}

angle::angle(float ang) {
	this->ang = ang;
};

void angle::input() {
	std::cout << "input angle ";
	std::cin >> ang;
}

void angle::output() {
	std::cout << ang;
}

float angle::convert_to_radians() {
	float rad;
	rad = (M_PI / 180) * ang;
	return rad;
}

float angle::find_sin() {
	return sin(ang);
}

float angle::find_cos() {
	return cos(ang);
}

bool angle::operator== (float alfa1) {
	if (ang == alfa1)
	{
		return true;
	}
	return false;
}

bool angle::operator> (float alfa1) {
	if (ang > alfa1)
	{
		return true;
	}
	return false;
}

bool angle::operator< (float alfa1) {
	if (ang < alfa1)
	{
		return true;
	}
	return false;
}

void angle::sum(float alfa1) {
	ang += alfa1;
	if (ang > 360)
	{
		ang = fmod(ang, 360);
	}
}

void angle::dif(float alfa1) {
	ang -= alfa1;
	while (ang < 0)
	{
		ang += 360;
	}
}

void angle::mult(float n) {
	ang *= n;
	if (n < 0) {
		while (ang < 0)
		{
			ang += 360;
		}
	}
	if (n > 0) {
		if (ang > 360)
		{
			ang = fmod(ang, 360);
		}
	}
}


void main()
{
	angle ang;
	
	float alfa1;
	std::cout << "write alfa1 here ";
	std::cin >> alfa1;

	float n;
	std::cout << "write n here ";
	std::cin >> n;

	angle alfa2, alfa3, alfa4, alfa8,
		alfa9, alfa10, alfa11;
	bool alfa5, alfa6, alfa7;

	ang.input();
	std::cout << std::endl;

	ang.output();
	std::cout << "is your angle" << std::endl;

	alfa2 = ang.convert_to_radians();
	std::cout << "angle is "; alfa2.output(); std::cout << std::endl;

	alfa3 = ang.find_sin();
	std::cout << "your sin "; alfa3.output(); std::cout << std::endl;

	alfa4 = ang.find_cos();
	std::cout << "your cos "; alfa4.output(); std::cout << std::endl;

/*angle alfa;
alfa.output();
std::cout << "is your another angle" << std::endl;*/
// нужно создавать другой объект для операций сравнения 
// + последней или все-таки можно через float?

	alfa5 = ang == alfa1;
	if (alfa5 == 0) {
		std::cout << "false" << std::endl;
	}
	else { 
		std::cout << "true" << std::endl; 
	}

	alfa6 = ang < alfa1;
	if (alfa6 == 0) {
		std::cout << "false" << std::endl;
	}
	else { 
		std::cout << "true" << std::endl; 
	}

	alfa7 = ang > alfa1;
	if (alfa7 == 0) {
		std::cout << "false" << std::endl;
	}
	else {
		std::cout << "true" << std::endl; 
	}

// почему он использует в следующей операции результат предыдущей?

	ang.sum(alfa1);
	std::cout << "ang + alfa1 = "; ang.output(); std::cout << std::endl;

	ang.dif(alfa1);
	std::cout << "ang - alfa1 = "; ang.output(); std::cout << std::endl;

	ang.mult(n);
	std::cout << "ang * n = "; ang.output(); std::cout << std::endl;

	angle ang1(30);
	angle ang2(45);
	ang1 + ang2;
}