#include <vector>
#include <string>
#include "Transaction.h"

using namespace std;

class Account{
    private:
        int balance;
        vector<Transaction> log;
    public:
        Account();
        vector<string> Report();
        bool Deposit(int amount);
        bool Withdraw(int acount);
        int GetBalance() { return balance;}
};

