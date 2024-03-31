#pragma once

// ЗАпись
void writeToFile(Product* arr, const char* path, unsigned int size)
{
	FILE* file;
	if (fopen_s(&file, path, "wb") == 0)
	{
		for (int i = 0; i < size; i++)
		{
			fwrite(&arr[i], sizeof(Product), 1, file);
		}
		fclose(file);
	}
}

// Чтение
void readFile(Product*& arr, const char* path, unsigned int& size)
{
	FILE* file;
	if (fopen_s(&file, path, "rb") == 0)
	{
		fseek(file, 0, SEEK_END);
		int fileSize = ftell(file);
		size = fileSize / sizeof(Product);
		fseek(file, 0, SEEK_SET);

		redirectToNullPtr(arr);
		Product* Warehouse = new Product[size];
		int i = 0;
		while (!feof(file))
		{
			fread(&Warehouse[i], sizeof(Product), 1, file);
			i++;
		}
		fclose(file);
		arr = Warehouse;
	}
}