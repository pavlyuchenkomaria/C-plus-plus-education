//Данная работа сделана на основе анализа (и наглого переписывания) следующих источников:
//1) https://gist.github.com/Hixon10/7c3edf1bdbe95803c3fa332039a6f554#file-structures_and_pointers-cpp-L20
//2) https://www.codesdope.com/cpp-classes-and-objects/
//3) https://www.codesdope.com/cpp-pointers/
//4) лекции Буториной Н.Б.
//5) лекции Пахомовой Е.Г


#include "pch.h"
#include <iostream>


// Начнем с определения. Структура - тип данных для 
// объединения данных различных типов в единое целое. 
// Это набор функций, и полей. Данные - поля. 
// Имя структуры - идентификатор типа. 
// Каждый объект - это коробочка с данными, с которыми могут
// работать функции, которые мы описали.

// Общий вид структуры достаточно понятен: мы объявляем структуру,
// как-то ее называем (желательно, чтобы имя описывало суть). 
// Стоит сразу поговорить про, простите мое косноязычие,
// структуру структуры (на c++ структура и класс равнозначны 
// за исключением одной особенности, которая будет рассмотрена ниже).
// Она имеет в себе две части: описательную и функциональную. 
// Описательную часть (св-ва) также называют член данные (data members),
// они принадлежат объявленному классу, так как собственно объявлены внутри него.
// Функциональная часть (методы) - это член функции (member functions).
// Член функции мы можем объявлять внутри описательной части или после нее.
// Если объявляем после, нужно указывать компилятору, 
// что функция относится к нашему классу  
// (name_of_struct::name_of_function() ).

// struct name_of_struct
//{ // defining data members:
//	type_of_field1 name_of_field1;
//	type_of_field2 name_of_field2;
//	...
//  // defining data functions:
//	type_of_output_data function1();
//	type_of_output_data function2();
//	...
//};
// //or define functions this way
// type_of_output_data name_of_struct::name_of_function1()
// type_of_output_data name_of_struct::name_of_function2()
// ...

// А теперь поговорим о том, какая же особенность
// разделяет понятия класса и структуры в c++. 
// А речь идет про тип доступа (access modifiers). 
// Всего их три: 
// - private - доступ извне недоступен, т.е. есть только внутри 
// класса, в котором член определен,
// - protected - доступ есть внутри класса и субклассов,
// - public - свободный доступ для всех.
// Так вот, структура - это класс, у которой уровень 
// доступа по умолчанию public
// класс - это структура, у которого уровень доступа 
// по умолчанию private.

// Создадим свою первую структуру - "Person", у человека
// есть Name и Age (имя и возраст). (Тип доступа пока оставим 
// по умолчанию)

struct Person
{
	char Name[30];
	int Age;

	void tell_me_truth()
	{

	}
};


int main()
{

}
