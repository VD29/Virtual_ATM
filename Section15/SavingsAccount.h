#pragma once
#include "CheckingAccount.h"
class SavingsAccount :
    public CheckingAccount
{
private:
    double balance=0;
    double int_rate = 5;
public:
    void Deposit(double amount);
    double GetBalance();
    void SetBalance(double amount);
    void DisplayBalance();
    SavingsAccount();
    ~SavingsAccount();
};

