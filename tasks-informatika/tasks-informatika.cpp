
#include "pch.h"
#include <iostream>


int main()
{
	int x, y, t;
	puts("Input x and y");
	scanf_s("%d%d", &x, &y);
	if (x < y)
	{
		t = x;
		x = y;
		y = t;
	}
	printf("x and y are: %d %d\n", x, y);
	//system("PAUSE");

	float a, b, c;
	puts("Input a, b, c");
	scanf_s("%f%f%f", &a, &b, &c);
	if (b == 0 && c == 0) {
	puts("x = 0");
	return 0;
	}
	float d = b * b - 4 * a * c;
	if (d > 0) {
		float x1 = (-b - sqrt(d)) / (2 * a);
		float x2 = (-b + sqrt(d)) / (2 * a);
		printf("x1 and x2 are: %f %f\n", x1, x2);
	}
	else if (d == 0) {
		float x = -b / (2 * a);
		printf("x is: %f\n", x);
	}

	float x, y;
	puts("Input x and y");
	scanf_s("%f%f", &x, &y);
	if (y * y <= (4 - x * x) &&
		y <= (2 - x) && y >= (x - 2))
		puts("Yes");
	else puts("No");

	int a=1, b=1, c = a + b, m;
	puts("Input m");
	scanf_s("%d", &m);
	while (c <= m) {
		a = b;
		b = c;
		c = a + b;
	}
	printf("sum is: %d\n", c - a);
}
