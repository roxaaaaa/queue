#pragma once
#include <iostream>
#include <queue>
#include <string>
using namespace std;
class Customer {

public:
	string name;
	int age;
	double cash;
	Customer();
	Customer(string n, int a, double c);

	bool friend operator<(const Customer& r, const Customer& i)
	{
		return r.age < i.age;

	}
};
