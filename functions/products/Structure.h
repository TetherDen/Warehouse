#pragma once



struct Date
{
	int day;
	int month;
	int year;
};
struct ExpirationDate
{
	int day;
	int month;
	int year;
};

struct Product
{
	char name[50];
	char manufacturer[50];
	double price;
	char productType[50];
	Date date;
	ExpirationDate expDate;
};