// task-1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>

float my_sum(float a, float b) 
{
	return a + b;
}

void hello_name(std::string name)
{
	std::cout << "hello, " << name;
}

int my_find(char pattern, std::string str)
{ 
	int i = 0;
	for (char ch : str) {
		if (ch == pattern) {
			return i;
		}
		i++;
	}
	return -1;
}
	


double pi_number = 3.14;

int main()
{
	std::cout << my_sum(4.45, 3.5);
	hello_name("Inaccra");

	int numbers[9];
	numbers[2] = 5;

	std::string names[] = { "masha", "denis" };

	for (std::string name : names) {
		std::cout << name << std::endl;
	}
	
	for (int i = 0; i < 2; i++) {
		std::cout << names[i] << ", hello" << "\r\n";
	}
	
	int number = 0;
	int a = ++number;
	std::cout << ++number << ' ' << a++ << std::endl;

	char my_pattern = 'f';

	std::cout << my_find(my_pattern, "Denis fffuuu nad sestroi izdevatsya") 
		<< std::endl;

	std::cout << my_find('f', "Denis byaka nad sestroi izdevatsya")
		<< std::endl;

	int user_age;
	//std::cin >> user_age;

	//std::cout << "user age = " << user_age << std::endl;

	int values[4];
	for (int i = 0; i < 4; i++) {
		//int value;
		//std::cin >> value;
		//values[i] = value;
	}
	
	for (int i = 0; i < 4; i++) {
		//std::cout << values[i] << " ";
	}

	int sample_number = 42;

	printf("Number = %d ... \r\n", sample_number);

	int your_age;
	scanf_s("%d", &your_age);
	std::cout << "your_age=" << your_age << std::endl;
}

// префиксные и постфиксные операции/ postfix: строчка с кодом прошла
// и потом только выполнилось +1
// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
