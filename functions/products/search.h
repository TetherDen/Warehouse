#pragma once
#include "functions/products/Structure.h"
#include "functions/common.h"

// Поиск по имени
void searchByName(Product* arr, unsigned int size, char* search)
{
	for (int i = 0; i < size; i++)
	{
		if (strcmp(arr[i].name, search) == 0)
		{
			printProduct(arr[i],i);
		}
	}
}
 // Поиск по производителю
void searchByManufact(Product* arr, unsigned int size, char* search)
{

	for (int i = 0; i < size; i++)
	{
		if (strcmp(arr[i].manufacturer, search) == 0)
		{
			printProduct(arr[i], i);
		}
	}
}

// Поиск по цене
void searchByPrice(Product* arr, unsigned int size, double search)
{
	for (int i = 0; i < size; i++)
	{
		if (arr[i].price == search)
		{
			printProduct(arr[i], i);
		}
	}
}


void searchByType(Product* arr, unsigned int size, char* search)
{
	for (int i = 0; i < size; i++)
	{
		if (strcmp(arr[i].productType, search) == 0)
		{
			printProduct(arr[i], i);
		}
	}
}

void searchByDate(Product* arr, unsigned int size, Date dt)
{
	for (int i = 0; i < size; i++)
	{
		if (arr[i].date.year == dt.year && arr[i].date.month == dt.month && arr[i].date.day == dt.day)
		{
			printProduct(arr[i], i);
		}
	}
}

void searchByExpirationDate(Product* arr, unsigned int size, Date dt)
{
	for (int i = 0; i < size; i++)
	{
		if (arr[i].expDate.year == dt.year && arr[i].expDate.month == dt.month && arr[i].expDate.day == dt.day)
		{
			printProduct(arr[i], i);
		}
	}
}
