
#include "pch.h"
#include <iostream>

class angle {
	int grad, min;
public:
	angle() 
	{
		grad = 0, min = 0;
	};

	void input();
	void output();

};

int main()
{
	angle::angle(int grad, int min);

	void angle::input() {
		cout << "input grad";
		cin >> grad;
		cout << "input min";
		cin >> min;
	}
}