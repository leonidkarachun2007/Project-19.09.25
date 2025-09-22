#include<iostream>
#include "Product.h"
using namespace std;

int main() {
	Product a("Laptop", "Electronics", 56000, 2.5);
	a.Print();
	a.Input();
	a.Print();  



	a.SetName("HP 222");
	a.SetCategory("Electronics");
	a.SetPrice(4000);
	a.SetWeight(3.4);


	string type_name = a.GetName();
	cout << type_name << endl;

	string type_category = a.GetCategory();
	cout << type_category << endl;

	double type_price = a.GetPrice();
	cout << type_price << endl;

	double type_weight = a.GetWeight();
	cout << type_weight << endl;

}  