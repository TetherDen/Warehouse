#include <iostream>  
using namespace std;
#include "functions/products/Structure.h"
#include "functions/products/print.h"
#include "functions/products/products.h"
#include "functions/products/search.h"
#include "functions/common.h"
#include "functions/products/sortings.h"
#include "functions/files.h"
#include "functions/Menu.h"


int main()
{
	unsigned int warehouseSize = 0;
	Product* Warehouse = nullptr;

	char* search = nullptr; // Строка для ф-ций поиска
	unsigned int choice = 0, index = 0; // index для replace/del prod.
	double searchDouble = 0;  // search by price

	const char PATH[] = "bin_warehouse.dat";

	myMenu(Warehouse, warehouseSize, search, choice, index, searchDouble, PATH);


	deleteArr(search);
	deleteArr(Warehouse);
	return 0;
}