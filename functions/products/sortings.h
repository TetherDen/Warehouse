#pragma once


void sortingByPrice(Product* arr, unsigned int size)
{
	Product temp;
	for (int i = 0; i < size - 1; i++)
	{
		for (int j = i + 1; j < size; j++)
		{
			if (arr[i].price > arr[j].price)
			{
				temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}

		}
	}
}

void sortingByProdType(Product* arr, unsigned int size)
{
	Product temp;
	for (int i = 0; i < size - 1; i++)
	{
		for (int j = i + 1; j < size; j++)
		{
			if (strcmp(arr[i].productType, arr[j].productType) > 0)
			{
				temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}

		}
	}
}
