#pragma once
#include "functions/products/Structure.h"

// Запрос индекса
int askForIndex()
{
	unsigned int index;
	cout << "Enter index: ";
	cin >> index;
	return index;
}

// Строка для поиска
char* myGetline()
{
	cout << "Search(str): ";
	int size = 50;
	char* str = new char[size];
	cin.ignore(50, '\n');
	cin.getline(str, size - 1);
	return str;
}

Date askForDate()
{
	Date dt;
	cout << "Receiving date (day month year): ";
	cin >> dt.day >> dt.month >> dt.year;
	return dt;
}

double askForPrice()
{
	double price;
	cout << "Enter price: ";
	cin >> price;
	return price;
}


template<typename T>
void deleteArr(T* arr)
{
	if (arr != nullptr)
		delete[]arr;
}

template<typename T>
void redirectToNullPtr(T*& arr)
{
	if (arr != nullptr)
	{
		delete[]arr;
		arr = nullptr;
	}	
}