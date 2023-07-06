





using namespace std;

class Customer {

    public:
    
    Customer();
    ~Customer();
    void init(const int cuId, const string nm);
    void init(const Customer &other);
    int get_CustomerId();
    string get_CustomerName();

    private:

    int customerId;
    string customerName;
};

