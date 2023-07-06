



#include <iostream>
using namespace std;

class Account{
    
public:
    Account();
    ~Account();
    void init(const int acntId, const int brnchId , const int custmrId , const double amount, const string custmrNm, const string brnchNm );
    void init(const Account &other);
    int get_accountId();
    int get_customerId();
    int get_branchId();
    double get_deposit();
    void get_allInfo();
    string get_customerName();
    string get_branchName();
    
private:
    int accountId;
    int customerId;
    int branchId;
    double deposit;
    string customerName;
    string branchName;
    
};
