

#include <iostream>
#include "BankingSystem.h"
using namespace::std;

int main(int argc, const char * argv[]) {
    BankingSystem B;
        
        B.addCustomer(1,"c1");
        B.addBranch(1,"b1");
        B.addAccount(1,1,100.00);
        B.addAccount(1,1,200.00);
        B.addAccount(1,1,300.00);
        B.addAccount(1,1,400.00);
        B.deleteAccount(4);
        B.deleteAccount(4);
        B.deleteAccount(3);
        B.deleteAccount(3);
        B.deleteAccount(2);
        B.deleteAccount(2);
        B.deleteAccount(1);
        B.deleteAccount(1);
        B.addAccount(1,1,100.0);
        B.deleteAccount(5);
        B.addAccount(20,1,100.0);
        B.addAccount(1,20,100.0);
        B.addAccount(20,20,100.0);

        B.deleteBranch(1);
        B.addAccount(1,1,100.0);
        B.addAccount(1,1,100.0);
        B.addBranch(1, "b1");
        B.addAccount(1,1,100.0);
        B.deleteCustomer(1);
        B.addAccount(1,1,100.0);
        B.addAccount(1,1,100.0);
        B.addCustomer(1, "c1");
        B.addAccount(1,1,100.0);
        B.showCustomer(1);
        B.deleteCustomer(1);
        B.deleteBranch(1);

        B.addCustomer(1,"c1");
        B.addCustomer(2,"c2");
        B.addCustomer(3,"c3");
        B.addBranch(1, "b1");
        B.addBranch(2, "b2");
        B.addBranch(3, "b3");

        B.addAccount(1,1,100.00);
        B.addAccount(2,1,200.00);
        B.addAccount(3,1,300.00);
        B.addAccount(1,2,100.00);
        B.addAccount(2,2,200.00);
        B.addAccount(3,2,300.00);
        B.addAccount(1,3,100.00);
        B.addAccount(2,3,200.00);
        B.addAccount(3,3,300.00);
        B.deleteCustomer(1);
        B.deleteBranch(2);

        B.deleteAccount(8);
        B.deleteAccount(9);
        B.deleteAccount(10);
        B.deleteAccount(11);
        B.deleteAccount(12);
        B.deleteAccount(13);
        B.deleteAccount(14);
        B.deleteAccount(15);
        B.deleteAccount(16);

    return 0;
}
