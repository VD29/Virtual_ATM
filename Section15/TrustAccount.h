#pragma once
#include "SavingsAccount.h"
class TrustAccount :
    public SavingsAccount
{
private:
    double balance = 0;
    double int_rate = 3;
public:
    void Deposit(double amount);
    void Withdraw(double amount);
    double GetBalance();
    void SetBalance(double amount);
    void DisplayBalance();
    TrustAccount();
    ~TrustAccount();
};

