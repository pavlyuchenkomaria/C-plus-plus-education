#include "pch.h"
#include <iostream>
#include <conio.h>

int Cost(int *p, int **m, int n) {

	int s = 0;
	for (int i = 0; i < n - 1; i++) {
		s += m[p[i]][p[i + 1]];
	}
	s += m[n - 1][0];
	return s;
}

void Inversion(int *p, int n, int i) {
	int k, t;
	for (k = i + 1, t = n - 1; k < t; k++, t--) {
		int c = p[k];
		p[k] = p[t];
		p[t] = c;
	}
}

bool Permitation(int *p, int n) {
	int i, j, max_i, max_j;
	int tip = 0;
	for (i = n - 2; i >= 1 && tip == 0; i--)
	{
		if (p[i] < p[i + 1])
		{
			max_i = i;
			for (j = n - 1; j > max_i; j--)
			{
				if (p[max_i] < p[j])
				{
					max_j = j;
					tip = 1;
					break;
				}
			}
		
		int c = p[max_i];
		p[max_i] = p[max_j];
		p[max_j] = c;
		Inversion(p, n, i);
	}
	}
	if (tip == 0) {
		return false;
	}
	return true;
}

void main() {
	int **m, n;
	std::cout << "n: ";
	std::cin >> n;

	m = new int*[n];
	for (int i = 0; i < n; i++) {
		m[i] = new int[n];
	}
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			m[i][j] = rand() % 10;
		}
	}
	int k;
	std::cout << "input k: ";
	std::cin >> k;
	int *p;
	p = new int[n];
	p[0] = k;
	for (int i = 1; i <= k; i++) {
		p[i] = i - 1;
	}
	for (int i = k + 1; i < n; i++) {
		p[i] = i;
	}

	int *p_min = new int[n];
	for (int i = 0; i < n; i++) {
		p_min[i] = p[i];
	}

	int min_cost = Cost(p, m, n);

	for (int i = 0; i < n; i++) {
		std::cout << p_min[i] << " ";
	}
	std::cout << std::endl;
	std::cout << min_cost << std::endl;


	while (Permitation(p, n)) {
		int cost = Cost(p, m, n);

		for (int i = 0; i < n; i++) {
			std::cout << p[i] << " ";
		}
		std::cout << std::endl;
		std::cout << cost << std::endl;

		if (cost < min_cost) {
			min_cost = cost;

			for (int i = 0; i < n; i++) {
				p_min[i] = p[i];
			}
		}
	};
	std::cout << "p_min is: ";
	for (int i = 0; i < n; i++) {
		std::cout << p_min[i] << " ";
	}
	std::cout << std::endl;
	std::cout <<"min_cost is: "<< min_cost << std::endl;

	_getch();
	for (int i = 0; i < n - 1; i++) {
		delete[] m[i];
	}
	delete[] m;
	delete[] p_min;
	delete[] p;

}


// для проверки печать m
//for (int i = 0; i < n; i++)
//{
//	std::cout << std::endl;
//	for (int j = 0; j < n; j++)
//	{
//		std::cout << m[i][j] << " ";
//	}
//}