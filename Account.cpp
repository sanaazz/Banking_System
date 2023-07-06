


#include "Account.h"
#include <iostream>
#include <iomanip>

using namespace std;

Account::Account(){
    accountId = 0;
    branchId = 0;
    customerId = 0;
    deposit = 0.00;
    branchName = "";
    customerName = "";
}

void Account::init(const int acntId, const int brnchId, const int custmrId, const double amount, const string custmrNm, const string brnchNm){
    branchId = brnchId;
    customerId = custmrId;
    deposit = amount;
    accountId = acntId;
    branchName = brnchNm;
    customerName = custmrNm;
}

void Account::init(const Account &other){
    branchId = other.branchId;
    customerId = other.customerId;
    deposit = other.deposit;
    accountId = other.accountId;
    branchName = other.branchName;
    customerName = other.customerName;
}
double Account::get_deposit(){
    return deposit;
}
int Account::get_branchId(){
    return branchId;
}
int Account::get_accountId(){
    return accountId;
}
int Account::get_customerId(){
    return customerId;
}
string Account::get_customerName(){
    return customerName;
}
string Account::get_branchName(){
    return branchName;
}
void Account::get_allInfo(){
        cout
            << accountId
            << " "
            << branchId
            << " "
            << branchName
            << " "
            << customerId
            << " "
            << customerName
            << " "
            <<fixed
            <<setprecision(2)
            << deposit
            << endl;
    //cout<< accountId-999<< "\t\t\t"<< branchId << "\t\t"<< branchName<< "\t\t\t"<< customerId <<"\t\t\t"<< customerName << "\t\t\t" << deposit <<endl;
}

Account::~Account(){
    accountId = 0;
    branchId = 0;
    customerId = 0;
    deposit = 0;
    branchName.erase();
    customerName.erase();
}
