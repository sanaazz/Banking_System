




using namespace std;

class Branch {

    public:
    
    Branch();
    ~Branch();
    void init(const int id, const string nm);
    void init(const Branch &other);
    int get_BranchId();
    string get_BranchName();

    private:

    int branchId;
    string branchName;
};
