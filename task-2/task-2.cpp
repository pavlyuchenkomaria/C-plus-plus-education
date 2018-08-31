// task-2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>

// создаем функцию для вывода минимального 
// элемента массива через 1 переменную
int my_min(int numbers[], int length) {
	int current_min = numbers[0];
	for (int i = 1; i < length; i++) {
		if (numbers[i] < current_min) {
			current_min = numbers[i];
		}
	}
	return current_min;
}

int main()
{
	// суммирование конечного числа элементов
	int sum = 0;
	for (int i = 0; i < 3; i++) {
		int number;
		std::cin >> number;
		sum = sum + number;
	}
	std::cout << sum;

	// вывод мин массива 
	int length;
	std::cin >> length;
	int numbers[4];
	for (int i = 0; i < length; i++) {
		int a;
		std::cin >> a;
		numbers[i] = a;
	}
	std::cout << my_min(numbers, length);
}
