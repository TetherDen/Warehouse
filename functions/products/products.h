#pragma once


// size+1 для addProduct
void copyForAddProd(Product*& arr, unsigned int& size)
{
	Product* newArr = new Product[size + 1];
	for (int i = 0; i < size; i++)
	{
		newArr[i] = arr[i];
	}
	delete[]arr;
	arr = newArr;
	size++;
}
// Создание продукта
Product makeProduct()
{
	Product prod;
	cout << "Enter product name: ";
	cin.ignore(255, '\n');
	cin.getline(prod.name, 50 - 1);
	cout << "Enter manufacturer: ";
	cin.getline(prod.manufacturer, 50 - 1);
	cout << "Enter price(number): ";
	cin >> prod.price;
	cout << "Enter type: ";
	cin.ignore(255, '\n');
	cin.getline(prod.productType, 50 - 1);

	cout << "Receiving date (day month year): ";
	cin >> prod.date.day >> prod.date.month >> prod.date.year;

	cout << "Expiration dates (day month year): ";
	cin >> prod.expDate.day >> prod.expDate.month >> prod.expDate.year;
	return prod;
}
// Добавление продукта
void addProduct(Product*& arr, unsigned int& size)
{
	Product prod = makeProduct();
	copyForAddProd(arr, size);
	arr[size - 1] = prod;
}

// Удаление продукта
void delProduct(Product*& arr, unsigned int& size, int index)
{
	if (index < size)
	{
		Product* newArr = new Product[size - 1];
		for (int i = 0, j = 0; i < size; i++)
		{
			if (i != index)
			{
				newArr[j] = arr[i];
				j++;
			}
		}
		delete[]arr;
		arr = newArr;
		size--;
	}
}
// Замена продукта
void replaceProd(Product*& arr, int index)
{
	Product prod = makeProduct();
	arr[index] = prod;
}