#pragma once
#include "functions/products/Structure.h"

// Вывод конкретного продукта
void printProduct(Product pd,int index)
{
	cout << "Product ID(Index): " << index << endl;
	cout << "Name: " << pd.name << endl;
	cout << "Price: " << pd.price << endl;
	cout << "Manufacturer: " << pd.manufacturer << endl;
	cout << "Product type: " << pd.productType << endl;
	cout << "Date : " << pd.date.day << "." << pd.date.month << "." << pd.date.year << endl;
	cout << "Exp. Date : " << pd.expDate.day << "." << pd.expDate.month << "." << pd.expDate.year << endl;
	cout << "======================" << endl;
}

// Вывод всех продуктов
void printWarehouseProducts(Product* arr, unsigned int size)
{
	for (int i = 0; i < size; i++)
	{
		cout << "Product ID(Index): " << i << endl;
		cout << "Name: " << arr[i].name << endl;
		cout << "Price: " << arr[i].price << endl;
		cout << "Manufacturer: " << arr[i].manufacturer << endl;
		cout << "Product type: " << arr[i].productType << endl;
		cout << "Date : " << arr[i].date.day << "." << arr[i].date.month << "." << arr[i].date.year << endl;
		cout << "Exp. Date : " << arr[i].expDate.day << "." << arr[i].expDate.month << "." << arr[i].expDate.year << endl << endl;
	}
}

// Вывод продуктов для поиска и ID ( индекс товара на складе )
void printForSearchList(Product* arr, unsigned int size, int* listIndex)
{
	for (int i = 0; i < size; i++)
	{
		cout << "Product ID(Index): " << listIndex[i] << endl;
		cout << "Name: " << arr[i].name << endl;
		cout << "Price: " << arr[i].price << endl;
		cout << "Manufacturer: " << arr[i].manufacturer << endl;
		cout << "Product type: " << arr[i].productType << endl;
		cout << "Date : " << arr[i].date.day << "." << arr[i].date.month << "." << arr[i].date.year << endl;
		cout << "Exp. Date : " << arr[i].expDate.day << "." << arr[i].expDate.month << "." << arr[i].expDate.year << endl << endl;
	}
}