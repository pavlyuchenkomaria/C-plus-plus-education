
#include "pch.h"
#include <iostream>
#define _USE_MATH_DEFINES
#include <math.h>
using namespace std;

class angle {
	float ang;
public:
	angle()
	{
		ang = 0;
	};

	void input();
	void output();
	float convert_to_radians();
	float find_sin();
	float find_cos();
	bool operator == (angle alfa1); // alfa1 - another angle
	bool operator > (angle alfa1);
	bool operator < (angle alfa1);
	float sum(angle alfa1);
	float dif(angle alfa1);
	float mult(angle n); // n - const
	float sum_two_angles(angle alfa1);
};

angle::angle(float a)
{
	ang = a;
}

void angle::input() {
	cout << "input angle";
	cin >> ang;
}

void angle::output() {
	cout << "angle is" << ang;
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

bool operator == (angle alfa1) {
	if (ang == alfa1)
		return true;
	else return false;
}

bool operator > (angle alfa1) {
	cin >> alfa1;
	if (ang > alfa1) return true;
	else return false;
}

bool operator < (angle alfa1) {
	cin >> alfa1;
	if (ang < alfa1) return true;
	else return false;
}

float angle::sum(angle alfa1) {
	cin >> alfa1;
	ang += alfa1;
	if (ang > 360)
		return ang % 360;
	else return ang;
}

float angle::dif(angle alfa1) {
	cin >> alfa1;
	ang -= alfa1;
	while (ang < 0)
		ang += 360;
	return ang;
}

float angle::mult(n) {
	cin >> n;
	ang *= n;
	if (n < 0) {
		while (ang < 0)
			ang += 360;
		return ang;
	}
	if (n > 0) {
		if (ang > 360)
			return ang % 360;
		else return ang;
	}

	float angle::sum_two_angles(angle alfa1) {
		cin >> alfa1;
		return(ang + alfa1);
	}
}

int main()
{


}