



#include <iostream>
#include "Branch.h"
#include "Customer.h"
#include "Account.h"
using namespace std;



class BankingSystem {

public:


    BankingSystem();
    ~BankingSystem();
    
    void addBranch( const int branchId, const string branchName );
    void deleteBranch( const int branchId );
    void addCustomer( const int customerId, const string customerName );
    void deleteCustomer( const int customerId );
    int addAccount( const int branchId , const int customerId , const double amount );
    void deleteAccount( const int accountId );
    
    void showAllAccounts();
    void showBranch( const int branchId ); 
    void showCustomer( const int customerId );


private:
    
    Branch* branchArr;
    int branchsize;
    Customer* customerArr;
    int customersize;
    int accountId_gen;
    Account* accArr;
    int accountsize;
    int accCount;
};
