#pragma once


//void myMenu()
void myMenu(Product* Warehouse, unsigned int warehouseSize, char* search, unsigned int choice, unsigned int index, double searchDouble, const char* PATH)
{
	while (true)
	{
		cout << "		Welcome to Warehouse." << endl << endl;
		cout << " Menu:" << endl;
		cout << " 1 - print all products" << endl;
		cout << " 2 - add product" << endl;
		cout << " 3 - delete product" << endl;
		cout << " 4 - replace product" << endl;
		cout << " 5 - search product" << endl;
		cout << " 6 - save to bin file" << endl;
		cout << " 7 - load from file" << endl;
		cout << " 8 - sortings" << endl;
		cout << " 0 - exit" << endl;
		cin >> choice;
		if (choice == 1)
		{
			printWarehouseProducts(Warehouse, warehouseSize);
		}
		else if (choice == 2)
		{
			addProduct(Warehouse, warehouseSize);
		}
		else if (choice == 3)
		{
			index = askForIndex();
			delProduct(Warehouse, warehouseSize, index);
		}
		else if (choice == 4)
		{
			index = askForIndex();
			replaceProd(Warehouse, index);
		}
		else if (choice == 5)
		{
			while (true)
			{
				cout << " 1 - search by name" << endl;
				cout << " 2 - search by manufacturer" << endl;
				cout << " 3 - search by price" << endl;
				cout << " 4 - search by product type" << endl;
				cout << " 5 - search by receiving date" << endl;
				cout << " 6 - search by expiration date" << endl;
				cout << " 0 - back" << endl;
				cin >> choice;
				if (choice == 1)
				{
					redirectToNullPtr(search);	// Если повторный вызов, очистка старого.
					search = myGetline();
					searchByName(Warehouse, warehouseSize, search);
				}
				else if (choice == 2)
				{
					redirectToNullPtr(search);
					search = myGetline();
					searchByManufact(Warehouse, warehouseSize, search);
				}
				else if (choice == 3)
				{
					searchDouble = askForPrice();
					searchByPrice(Warehouse, warehouseSize, searchDouble);
				}
				else if (choice == 4)
				{
					redirectToNullPtr(search);
					search = myGetline();
					searchByType(Warehouse, warehouseSize, search);
				}
				else if (choice == 5)
				{
					searchByDate(Warehouse, warehouseSize, askForDate());
				}
				else if (choice == 6)
				{
					searchByExpirationDate(Warehouse, warehouseSize, askForDate());
				}
				else
				{
					break;
				}
			}
		}
		else if (choice == 6) // Запись
		{
			writeToFile(Warehouse, PATH, warehouseSize);
		}
		else if (choice == 7) // Чтение 
		{
			readFile(Warehouse, PATH, warehouseSize);
		}
		else if (choice == 8)
		{
			cout << " 1 - sort by price" << endl;
			cout << " 2 - sort by product type" << endl;
			cout << " 3 - back" << endl;
			cin >> choice;
			if (choice == 1)
			{
				sortingByPrice(Warehouse, warehouseSize);
			}
			else if (choice == 2)
			{
				sortingByProdType(Warehouse, warehouseSize);
			}
			else
			{
				continue;
			}

		}
		else if (choice == 0)
		{
			break;
		}
		else {
			continue;
		}


	}
}