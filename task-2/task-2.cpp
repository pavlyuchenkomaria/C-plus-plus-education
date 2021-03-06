// task-2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <string>


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
	
	// сумма двух массивов
	int matrix1[2][2];
	int matrix2[2][2];
	int matrix3[2][2];
	//std::string str = "";
	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 2; j++) {
			std::cin >> matrix1[i][j];
		}
	}
	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 2; j++) {
			std::cin >> matrix2[i][j];
		}
	}
	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 2; j++) {
			matrix3[i][j] = matrix1[i][j]
				+ matrix2[i][j];
		}
	}
	for (int j = 0; j < 2; j++) {
		for (int i = 0; i < 2; i++) {
			std::cout << matrix3[i][j] << " ";
		}
		std::cout << std::endl;
	}
}
