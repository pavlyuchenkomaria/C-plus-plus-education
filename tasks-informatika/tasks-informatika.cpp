
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

//void Swap(float *a, float *b)
//{
//	float c = *a; 
//	*a = *b; 
//	*b = c;
//}
//
//void main() {
//	float numbers[4];
//	for (int i = 0; i < 4; i++) {
//		scanf_s("%f", &numbers[i]);
//	}
//	
//	float current_min = numbers[0];
//	for (int i = 0; i < 4; i++) {
//		if (numbers[i] < current_min) {
//			current_min = numbers[i];
//		};
//	};
//	
//	float current_max = numbers[0];
//	for (int j = 0; j < 4; j++) {
//		if (numbers[j] > current_max) {
//			current_max = numbers[j];
//		};
//	};
//	
//	Swap(&current_max, &current_min);
//	
//	for (int i = 0; i < 4; i++) {
//		printf_s("%f", numbers[i]);
//	}
//}
#include <iostream>
#include <conio.h>
//void main() {
//	int numbers[5];
//	int s = 0;
//	for (int i = 0; i < 5; i++) {
//		std::cin >> numbers[i];
//		if (numbers[i] > 0) s += numbers[i];
//	}
//	std::cout << "s is " << s;
//	}
//
//void main() {
//	//выделили динамическую память, где а - переменная-указатель,  
//	// которая будет содержать адрес 0 элемента массива,
//	// n -  кол-во элементов массива
//	int *a, n, s = 0;
//	puts("Input n");
//	std::cin >> n;
//	a = new int[n];
//	puts("Input numbers");
//	for (int *p = a; p < a + n; p++){
//		std::cin >> *p;
//		if (*p > 0) s += *p;
//	};
//	std::cout << "s is " << s;
// delete[] a;
//}


//void main() {
//	int n = 4; 
//	float numbers[4];
//	for (int i = 0; i < 4; i++) {
//		std::cin >> numbers[i];
//	}
//	int k;
//	int current_max = numbers[0];
//	for (int j = 0; j < 4; j++) {
//		if (numbers[j] > current_max) {
//			current_max = numbers[j];
//			k = j;
//		};
//	};
//
//	for (int j = 0; j < k && j > k + 1; j++) {
//		std::cout << numbers[j];
//	}
//	
//	for (int j = k + 1; j <= n; j++) {
//		std::cout << numbers[j] << std::endl;
//	}
//}
// умножение матриц
//void main() {
//int a[2][2], b[2][2], c[2][2];
//for (int i = 0; i < 2; i++){
//	for (int j = 0; j < 2; j++) {
//		std::cin >> a[i][j];
//	}
//}
//for (int i = 0; i < 2; i++) {
//	for (int j = 0; j < 2; j++) {
//		std::cin >> b[i][j];
//	}
//}
//for (int i = 0; i < 2; i++) {
//for (int j = 0; j < 2; j++) {
//	c[i][j] = 0;
//	for (int k = 0; k < 2; k++) {
//		c[i][j] += a[i][k] * b[k][j];
//	}
//	}
//}
//for (int i = 0; i < 2; i++) {
//	for (int j = 0; j < 2; j++) {
//		std::cout << c[i][j];
//	}
//}
//}

//#include <iostream>
//#include <conio.h>
//using namespace std;
//void main() {
//	int **a, m, n, i, j, i_max, s, s_max = 0;
//	puts("input n, m");
//	cin >> n;
//	cin >> m;
//	a = new int* [n];
//	for (i = 0; i < n; i++) {
//		a[i] = new int[m];
//	}
//	for (i = 0; i < n; i++) {
//		for (j = 0; j < m; j++) {
//			cin >> a[i][j];
//		}
//	}
//
//	for (j = m - 1; j >= 0; j--) {
//		s_max += a[n - 1][j];
//	}
//	i_max = n - 1;
//
//	for (i = n - 2, s = 0; i >= 0; i--) {
//		for (j = m - 1; j >= 0; j--) {
//			s += a[i][j];
//		}
//		if (s > s_max) {
//			s_max = s;
//			i_max = i;
//		}
//
//	}
//	for (int i = i_max; i < n-1; i++) {
//		for (j = 0; j < m; j++) {
//			a[i][j] = a[i + 1][j];
//		}
//	}
//	for (i = 0; i < n-1; i++) {
//		cout << endl;
//		for (j = 0; j < m; j++) {
//			printf("%6d", a[i][j]);
//		}
//	}
//	for (i = 0; i < n; i++) {
//		delete a[i];
//	}
//	delete[] a;
//}
#include <iostream>
#include <conio.h>

void main() {
	int **a, m, n, i, j, k;
	puts("input n, m");
	std::cin >> n;
	std::cin >> m;
	a = new int*[n];
	for (i = 0; i < n; i++) {
		a[i] = new int[m];
	}
	for (i = 0; i < m; i++)
	{
		for (j = 0; j < n; j++)
		{
			a[i][j] = rand() % 50;
		}
	}
	puts("input k");
	std::cin >> k;

