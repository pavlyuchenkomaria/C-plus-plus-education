
#include "pch.h"
#include <iostream>
#define _USE_MATH_DEFINES
#include <math.h>

struct Complex
{
	float re, im;

	Complex();
	float Mod();
	//double Arg();
	Complex Sum(Complex);
	/*Complex Dif(Complex);
	Complex Mult(Complex);
	Complex Div(Complex);
	Complex Conj();
	Complex Input();
	Complex Output();
	Complex Eq(Complex);*/


};

//Complex::Complex()
//{
//	re = 0; im = 0;
//}

float Complex::Mod() {
	float r;
	r = sqrt(re * re + im * im);
	return r;
}

Complex Complex::Sum(Complex z) {
	Complex res;
	res.re = re + z.re;
	res.im = im + z.im;
	return res;
 }


int main()
{
	//// complex
	//int re, im;
	//std::cin >> re >> im;
	int x, y, t;
	puts("Input x and y");
	scanf("%d%d", &x, &y);
	if (x < y)
	{
		t = x;
		x = y;
		y = t;
	}
	printf("x and y are: %d %d\n", x, y);
	system("PAUSE");
}
