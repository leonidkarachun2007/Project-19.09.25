#include "Product.h"
#include <iostream>
using namespace std;

Product::Product()
{
	name = ' ';
	category = ' ';
	price = 0.0;
	weight = 0.0;
}

Product::Product(string n, string cat, double pr, double we)
{
	name = n;	
	category = cat;
	price = pr;
	weight = we;	
}

void Product::Print()
{
	cout << "Name: " << name << "\tCategory: " << category << "\tPrice: " << price << "\tWeight: " << weight << endl;
}

void Product::Init(string n, string cat, double pr, double we)
{
	name = n;
	category = cat;
	price = pr;
	weight = we;

}

void Product::Input()
{
	char buff[50];
	cout << "Enter product name -> ";
	cin.getline(buff, 50);
	name = buff;

	cout << "Enter product category -> ";
	cin.getline(buff, 50);
	category = buff;

	cout << "Enter product price -> ";
	cin >> price;

	cout << "Enter product weight -> ";
	cin >> weight;

}

void Product::SetName(string n) {
	name = n;
}
string Product::GetName() {
	return name;
}

void Product::SetCategory(string cat) {
	category = cat;
}
string Product::GetCategory() {
	return category;
}

void Product::SetPrice(double pr) {
	price = pr;
}
double Product::GetPrice() {
	return price;
}

void Product::SetWeight(double we) {
	weight = we;
}

double Product::GetWeight() {
	return weight;
}

