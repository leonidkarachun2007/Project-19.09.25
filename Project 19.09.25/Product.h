#pragma once
#include <iostream>
#include <string>

using namespace std;
class Product
{
	string name;
	string category;
	double price;
	double weight;

public:
	Product();
	Product(string n, string cat, double pr, double we);
	void Print();
	void Init(string n, string cat, double pr, double we);
	void Input(); 

	void SetName(string n);

	string GetName();

	void SetCategory(string cat);

	string GetCategory();

	void SetPrice(double pr);

	double GetPrice();

	void SetWeight(double we);

	double GetWeight();
};

