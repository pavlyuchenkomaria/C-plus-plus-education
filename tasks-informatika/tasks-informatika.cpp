
#include "pch.h"
#include <iostream>


//int main()
//{
	//int x, y, t;
	//puts("Input x and y");
	//scanf_s("%d%d", &x, &y);
	//if (x < y)
	//{
	//	t = x;
	//	x = y;
	//	y = t;
	//}
	//printf("x and y are: %d %d\n", x, y);
	////system("PAUSE");

	//float a, b, c;
	//puts("Input a, b, c");
	//scanf_s("%f%f%f", &a, &b, &c);
	//if (b == 0 && c == 0) {
	//puts("x = 0");
	//return 0;
	//}
	//float d = b * b - 4 * a * c;
	//if (d > 0) {
	//	float x1 = (-b - sqrt(d)) / (2 * a);
	//	float x2 = (-b + sqrt(d)) / (2 * a);
	//	printf("x1 and x2 are: %f %f\n", x1, x2);
	//}
	//else if (d == 0) {
	//	float x = -b / (2 * a);
	//	printf("x is: %f\n", x);
	//}

	//float x, y;
	//puts("Input x and y");
	//scanf_s("%f%f", &x, &y);
	//if (y * y <= (4 - x * x) &&
	//	y <= (2 - x) && y >= (x - 2))
	//	puts("Yes");
	//else puts("No");

	//int a=1, b=1, c = a + b, m;
	//puts("Input m");
	//scanf_s("%d", &m);
	//while (c <= m) {
	//	a = b;
	//	b = c;
	//	c = a + b;
	//}
	//printf("sum is: %d\n", c - a);

	/*int main()
	{
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
		else puts("no solution, d < 0");
	}*/

	/*int main()
	{
		int a = 1, b = 1, c = a + b, s = 2, m;
		puts("Input m");
		scanf_s("%d", &m);
		while (c <= m) {
			s += c;
			a = b;
			b = c;
			c = a + b;	
		}
		printf("sum is: %d\n", s);
	}*/
//}
//int main()
//{
//	int X, Z = 1;
//	puts("Input X");
//	scanf_s("%d", &X);
//	for (int z = 1; z < X; z+=2)
//		Z *= z;
//	printf("Z is: %d\n", Z);
//}

//int main()
//{
//	int x, x1, x2, s1, s = 0;
//	puts("Input x");
//	scanf_s("%d", &x);
//	x1 = x % 10;
//	x2 = floor(x / 10);
//while (x2 > 0.1) {
//		s += x1;
//		x1 = x2 % 10; 
//		s1 = x2;
//		x2 = floor(x2 / 10);
//	}
//	printf("s is: %d\n", s + s1);
//}

//void main()
//{
//	int m, n;
//	float result = 0;
//	puts("Input n and m");
//	scanf_s("%d", &n);
//	scanf_s("%d", &m);
//	for (int i = 1; i <= n; i++) {
//		for (int j = 1; j <= m; j++) {
//			result += 1.0 / (i * i + j * j);
//		}
//	}
//	printf("result is: %f\n", result);
//}

//void main()
//{
//		int m, n;
//		float result = 0;
//		puts("Input n");
//		scanf_s("%d", &n);
//		for (int i = 1; i <= n; i++) {
//			for (int j = 1; j <= i; j++) {
//				result += 1.0 / (2 * j + i);
//			}
//		}
//		printf("result is: %f\n", result);
//	}

//bool prime(int i) {
//	for (int j = 2; j <= sqrt(i); j++)
//		if (i%j == 0)
//			return false;
//	return true;
//}
//
//int main() {
//	int P, T;
//	puts("Input T");
//	scanf_s("%d", &T);
//	for (int i = 1; i < T; i++) {
//		if (prime(i) == true)
//			P = i;
//	}
//	printf("P is: %d\n", P);
//}


