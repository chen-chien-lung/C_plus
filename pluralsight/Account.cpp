#include "Account.h"

using namespace std;

//:: -> scope resolution operator, explain this is the member function of the Account class
//: -> single : only on contructor, let you to initialze variables
Account::Account() : balance(0){}

vector<string> Account::Report(){
    vector<string> report;
    report.push_back("Balance is " + to_string(balance));
    report.push_back("Transactions: ");
    for(auto t:log){
        report.push_back(t.Report());
    }
    report.push_back("---------------------");

    return report;
}

bool Account::Deposit(int amount){
    if (amount >= 0){
        balance += amount;
        log.push_back(Transaction(amount, "Deposit"));
        return true;
    }else{
        return false;
    }
}

bool Account::Withdraw(int amount){
    if(amount <= 0){
        return false;
    }

    if(balance >= amount){
        balance -= amount;
        log.push_back(Transaction(amount, "Withdraw"));
        return true;
    }
    return false;
}