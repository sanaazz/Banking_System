




#include <iostream>
#include "Customer.h"

using namespace std;

Customer::Customer(){
    
    customerId = 0;
    customerName = "";
}
void Customer::init(const int cuId, const string nm){
    
    customerId = cuId;
    customerName = nm;
}
void Customer::init(const Customer &other){
    
    customerId = other.customerId;
    customerName = other.customerName;
}
int Customer::get_CustomerId(){
    return customerId;
}
string Customer::get_CustomerName(){
    return customerName;
}

Customer::~Customer(){
    customerId = 0;
    customerName = "";
}
