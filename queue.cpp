// list.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <queue>
#include <string>
#include "Customer.h"
using namespace std;
int main()
{
    
    priority_queue<Customer> p;
    p.push (Customer("andryii", 18, 2500));
    p.push(Customer("alex", 19, 1005.56));
    p.push(Customer("gonzalo", 16, 0.56));

    while (!p.empty()) {
        Customer c = p.top();
        cout << c.name << " " << c.age << " " << c.cash << endl;
        p.pop();
    }
    /*
    //queue <int> a;
    queue <string> cafe;
    cafe.push("tea");
    cafe.push("sandwich");
    cafe.push("pepsi");
    cout << " menu: " << endl;
    while (!cafe.empty()) {
        cout << cafe.front() << " ";
        cafe.pop();
    }
    priority_queue <string> cafes;
    cafes.push("a");
    cafes.push("b");
    cafes.push("c");*/

     
}

