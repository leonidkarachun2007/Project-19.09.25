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


	void SetName(string n) {
		name = n;
	}

	string GetName() {
		return name;
	}

	void SetCategory(string cat) {
		category = cat;
	}

	string GetCategory() {
		return category;
	}

	void SetPrice(double pr) {
		price = pr;
	}

	double GetPrice() {
		return price;
	}

	void SetWeight(double we) {
		weight = we;
	}

	double GetWeight() {
		return weight;
	}
};

