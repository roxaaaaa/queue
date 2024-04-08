#include "Customer.h"
Customer::Customer() :name(""), age(0), cash(0.0) {
}
Customer::Customer(string n , int a, double c) : name(n), age(a), cash(c){
}