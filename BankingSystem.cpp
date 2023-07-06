



#include <iostream>
#include "BankingSystem.h"
#include <iomanip>

using namespace std;

BankingSystem::BankingSystem(){
    branchsize = 0;
    branchArr = NULL;
    customersize = 0;
    customerArr = NULL;
    accountId_gen = 1;
    accountsize = 0;
    accArr = NULL;
    accCount = 0;
}

BankingSystem::~BankingSystem(){
    delete [] branchArr;
    branchArr = nullptr;
    delete [] accArr;
    accArr = nullptr;
    delete [] customerArr;
    customerArr = nullptr;
    customersize = 0;
    accountId_gen = 0;
    accountsize = 0;
    branchsize = 0;
    accCount = 0;
    
    
}

void BankingSystem::addBranch(const int id, const string nm){
    
    if (branchsize == 0){
        branchArr = new Branch[1];
        branchArr[0].init(id, nm);
        branchsize ++;
        cout<< "Branch " << id << " has been added"<<endl;
    }
    else {
        for (int i=0; i< branchsize; i++){
            if (branchArr[i].get_BranchId() == id ){
                cout<<"Branch "<<id<<" already exists"<<endl;
                return;
            }
        }
        branchsize ++;
        Branch* aux_branchArr = new Branch[branchsize];
        
        for (int i = 0; i < branchsize-1; i++){
            aux_branchArr[i].init(branchArr[i]);
        }
        delete [] branchArr;
        branchArr = nullptr;
        
        aux_branchArr[branchsize-1].init(id, nm);
        
        branchArr = new Branch[branchsize];
        for (int i = 0; i < branchsize; i++){
            branchArr[i].init(aux_branchArr[i]);
        }
        delete [] aux_branchArr;
        aux_branchArr = nullptr;
        
        cout<< "Branch " << id << " has been added"<<endl;
    }
}
void BankingSystem::deleteBranch(const int id){
    
    bool sig = false;
    
    for(int i =0; i < branchsize; i++){
        if(branchArr[i].get_BranchId()== id){
            
            Branch* aux_arr = new Branch[branchsize-1];
            for (int j=0; j< i; j++)
                aux_arr[j].init( branchArr[j] );
            
            for (int j=i+1; j< branchsize; j++)
                aux_arr[j-1].init( branchArr[j] );
            
            delete [] branchArr;
            branchArr = nullptr;
            
            branchArr = new Branch[branchsize-1];
            for (int i = 0; i < branchsize-1; i++){
                branchArr[i].init(aux_arr[i]);
            }
            delete [] aux_arr;
            aux_arr = nullptr;
            
            branchsize--;
            cout<<"Branch "<<id<<" has been deleted"<<endl;
            sig = true;
        }
    }
    if (branchsize == 0){
        delete [] branchArr;
        branchArr = nullptr;}
    if (!sig){
        cout<<"Branch "<<id<<" does not exist"<<endl;
        }
    else{
        bool bg = false;
        int cnt = 0;
        
        for(int i = 0; i< accountsize; i++){
            if(accArr[i].get_branchId()==id){bg = true; cnt = i; break;}
            else{bg = false;}}
            
        while (bg){
            Account* aux_arr = new Account[accountsize-1];
            for (int j=0; j< cnt; j++)
                aux_arr[j].init( accArr[j] );
            for (int j=cnt+1; j< accountsize; j++)
                aux_arr[j-1].init( accArr[j] );
            delete [] accArr;
            accArr = nullptr;
            
            accArr = new Account[accountsize-1];
            for (int i = 0; i < accountsize-1; i++){
                accArr[i].init(aux_arr[i]);
            }
            delete [] aux_arr;
            aux_arr = nullptr;
            accountsize--;
                //cout<<"Account "<<accountId<<" has been deleted"<<endl;
            for(int i = 0; i< accountsize; i++){
                if(accArr[i].get_branchId()==id){bg = true; cnt = i; break;}
                else{bg = false;}
            }
        }
        }
}
void BankingSystem::addCustomer(const int cuId, const string nm){

    if (customersize == 0){
        customerArr = new Customer[1];
        customerArr[0].init(cuId, nm);
        customersize ++;
        cout<< "Customer " << cuId << " has been added"<<endl;
    }
    else {
        for (int i=0; i< customersize; i++){
            if (customerArr[i].get_CustomerId() == cuId ){
                cout<<"Customer "<<cuId<<" already exists"<<endl;
                return;
            }
        }
        customersize ++;
        Customer* aux_customerArr = new Customer[customersize];
        
        for (int i = 0; i < customersize-1; i++){
            aux_customerArr[i].init(customerArr[i]);
        }
        delete [] customerArr;
        customerArr = nullptr;
        
        aux_customerArr[customersize-1].init(cuId, nm);
        
        customerArr = new Customer[customersize];
        for (int i = 0; i < customersize; i++){
            customerArr[i].init(aux_customerArr[i]);
        }
        delete [] aux_customerArr;
        aux_customerArr = nullptr;
        
        cout<< "Customer " << cuId << " has been added"<<endl;
    }
    
}
void BankingSystem::deleteCustomer(const int cuId){
    bool sig = false;
    for(int i =0; i < customersize; i++){
        if(customerArr[i].get_CustomerId()== cuId){
            
            Customer* aux_arr = new Customer[customersize-1];
            for (int j=0; j< i; j++)
                aux_arr[j].init( customerArr[j] );
            
            for (int j=i+1; j< customersize; j++)
                aux_arr[j-1].init( customerArr[j] );
            
            delete [] customerArr;
            customerArr = nullptr;
            
            customerArr = new Customer[customersize-1];
            for (int i = 0; i < customersize-1; i++){
                customerArr[i].init(aux_arr[i]);
            }
            delete [] aux_arr;
            aux_arr = nullptr;
            
            customersize--;
            cout<<"Customer "<<cuId<<" has been deleted"<<endl;
            sig = true;
        }
    }
    if(customersize == 0){
        delete [] customerArr;
        customerArr = nullptr;}
    if (!sig){
        cout<<"Customer "<<cuId<<" does not exist"<<endl;
        }
    else{
        bool bg = false;
        int cnt = 0;
        
        for(int i = 0; i< accountsize; i++){
            if(accArr[i].get_customerId()==cuId){bg = true; cnt = i; break;}
            else{bg = false;}}
            
        while (bg){
            Account* aux_arr = new Account[accountsize-1];
            for (int j=0; j< cnt; j++)
                aux_arr[j].init( accArr[j] );
            for (int j=cnt+1; j< accountsize; j++)
                aux_arr[j-1].init( accArr[j] );
            delete [] accArr;
            accArr = nullptr;
            
            accArr = new Account[accountsize-1];
            for (int i = 0; i < accountsize-1; i++){
                accArr[i].init(aux_arr[i]);
            }
            delete [] aux_arr;
            aux_arr = nullptr;
            
            accountsize--;
                //cout<<"Account "<<accountId<<" has been deleted"<<endl;
            for(int i = 0; i< accountsize; i++){
                if(accArr[i].get_customerId()==cuId){bg = true; cnt = i; break;}
                else{bg = false;}
            }
        }
        
    }
}
int BankingSystem::addAccount(const int branchId, const int customerId, const double amount){
    bool branchId_sig = false;
    bool customerId_sig = false;
    string brnm = "";
    string cunm = "";
    
    for(int i = 0; i< branchsize; i++){
        if(branchArr[i].get_BranchId() == branchId){
            branchId_sig = true;
        }
    }
    for (int i = 0 ; i< customersize; i++){
        if(customerArr[i].get_CustomerId() == customerId){
            customerId_sig = true;
            }
    }
    if(branchId_sig && customerId_sig){
        if(accountsize == 0){
            accArr = new Account[1];
            for(int i = 0; i< branchsize; i++){
                if(branchArr[i].get_BranchId() == branchId){
                    brnm = branchArr[i].get_BranchName();
                }
            }
            for(int i = 0; i< customersize; i++){
                if(customerArr[i].get_CustomerId() == customerId){
                    cunm = customerArr[i].get_CustomerName();
                }
            }
            accArr[0].init(accountId_gen, branchId, customerId, amount, cunm, brnm);
            accountsize++;
            accCount++;
            cout<<"Account "<<accCount<<" added for customer "<<customerId<<" at branch "<<branchId<<endl;
            accountId_gen++;
        }
        else{
            Account* tempAcc =  new Account[accountsize+1];
            for(int i = 0; i< accountsize; i++){
                tempAcc[i].init(accArr[i]);
                
            }
            delete [] accArr;
            accArr = nullptr;
            
            accArr = new Account[accountsize+1];
            for (int i = 0; i < accountsize; i++){
                accArr[i].init(tempAcc[i]);
            }
            delete [] tempAcc;
            tempAcc = nullptr;
            
            for(int i = 0; i< branchsize; i++){
                if(branchArr[i].get_BranchId() == branchId){
                    brnm = branchArr[i].get_BranchName();
                }
            }
            for(int i = 0; i< customersize; i++){
                if(customerArr[i].get_CustomerId() == customerId){
                    cunm = customerArr[i].get_CustomerName();
                }
            }
            accArr[accountsize].init(accountId_gen, branchId, customerId, amount, cunm, brnm);
            accountsize++;
            accCount++;
            cout<<"Account "<<accCount<<" added for customer "<<customerId<<" at branch "<<branchId<<endl;
            accountId_gen++;
        }
    return accArr[accountsize-1].get_accountId();
    }
    else if (!branchId_sig){
        cout<<"Branch "<<branchId<<" does not exist"<<endl;
        return -1;
    }
    else {
        cout<<"Customer "<<customerId<<" does not exist"<<endl;
        return -1;
    }
}
void BankingSystem::deleteAccount( const int accountId ){
    bool sig = false;
    for(int i =0; i < accountsize; i++){
        if(accArr[i].get_accountId()== accountId){
            Account* aux_arr = new Account[accountsize-1];
            for (int j=0; j< i; j++)
                aux_arr[j].init( accArr[j] );
            for (int j=i+1; j< accountsize; j++)
                aux_arr[j-1].init( accArr[j] );
            delete [] accArr;
            accArr = nullptr;
            
            accArr = new Account[accountsize-1];
            for (int i = 0; i < accountsize-1; i++){
                accArr[i].init(aux_arr[i]);
            }
            delete [] aux_arr;
            aux_arr = nullptr;
            
            accountsize--;
            cout<<"Account "<<accountId<<" has been deleted"<<endl;
            sig = true;
        }
    }
    if (accountsize == 0){
        delete [] accArr;
        accArr = nullptr;}
    if (!sig){
        cout<<"Account "<<accountId<<" does not exist"<<endl;
        }
}
void BankingSystem::showAllAccounts(){
    //cout<<"Account id  "<<"Branch id   "<<"Branch name     "<<"Customer id     "<<"Customer name \t\t\t"<<"Balance"<<endl;
    cout
            << "Account id "
            << "Branch id "
            << "Branch name "
            << "Customer id "
            << "Customer name "
            << "Balance"
            << endl;
    for(int i = 0; i< accountsize; i++){
        accArr[i].get_allInfo();
        
    }
}
void BankingSystem::showBranch(const int branchId){
    int num_account = 0;
    string brnm = "";
    bool sig = false;
    
    for(int i = 0; i< branchsize; i++){
        if(branchArr[i].get_BranchId()== branchId){
            sig = true;
            brnm = branchArr[i].get_BranchName();
            
        }}
    if(sig){
        for(int i = 0; i< accountsize; i++){
            if(accArr[i].get_branchId()== branchId){
                num_account++;
                sig = true;
                brnm = accArr[i].get_branchName();
                
            }}
        
        if(num_account>0){
            cout<<"Branch id: "<<branchId<<" Branch name: "<<brnm<<" Number of accounts: "<<num_account<<endl;
            
            for(int i = 0; i< branchsize; i++){
                if(branchArr[i].get_BranchId()== branchId){
                    cout<<"Accounts at this branch:"<<endl;
                    cout
                    << "Account id "
                    << "Customer id "
                    << "Customer name "
                    << "Balance"
                    << endl;
                }
            }
            for(int i = 0; i< accountsize; i++){
                if(accArr[i].get_branchId()== branchId){
                    cout
                    << accArr[i].get_accountId()
                    << " "
                    << accArr[i].get_customerId()
                    << " "
                    << accArr[i].get_customerName()
                    << " "
                    <<fixed
                    <<setprecision(2)
                    << accArr[i].get_deposit()
                    << endl;
                }
            }
        }
        else{
            cout<<"Branch id: "<<branchId<<" Branch name: "<<brnm<<" Number of accounts: "<<num_account<<endl;
        }
    }
    else{
        cout<<"Branch "<<branchId<<" does not exist"<<endl;
    }
}
void BankingSystem::showCustomer(const int customerId){
    int num_account = 0;
    string cunm = "";
    bool sig = false;
    for(int i = 0; i< accountsize; i++){
        if(accArr[i].get_customerId()== customerId){
            num_account++;
            //sig = true;
            cunm = accArr[i].get_customerName();
    }}
    for(int i = 0; i< customersize; i++){
        if(customerArr[i].get_CustomerId()== customerId){
            sig = true;
            cunm = customerArr[i].get_CustomerName();
            
        }}
    if(sig){
        if(num_account>0){
            cout<<"Customer id: "<<customerId<<" Customer name: "<<cunm<<" Number of accounts: "<<num_account<<endl;
            
            for(int i = 0; i< customersize; i++){
                if(customerArr[i].get_CustomerId()== customerId){
                    cout<<"Accounts of this customer:"<<endl;
                    cout
                    << "Account id "
                    << "Branch id "
                    << "Branch name "
                    << "Balance"
                    << endl;
                }
            }
            for(int i = 0; i< accountsize; i++){
                if(accArr[i].get_customerId()== customerId){
                    cout
                    << accArr[i].get_accountId()
                    << " "
                    << accArr[i].get_branchId()
                    << " "
                    << accArr[i].get_branchName()
                    << " "
                    <<fixed
                    <<setprecision(2)
                    << accArr[i].get_deposit()
                    << endl;
                    
                }
            }
        }
        else{
            cout<<"Customer id: "<<customerId<<" Customer name: "<<cunm<<" Number of accounts: "<<num_account<<endl;
        }
    }
    else{
        cout<<"Customer "<<customerId<<" does not exist"<<endl;
    }
}
