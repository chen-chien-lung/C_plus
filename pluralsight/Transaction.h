#include <string>

using namespace std;

class Transaction{
    private:
        int amount;
        string type;
    public:
        Transaction(int amt, string king);
        string Report();
};