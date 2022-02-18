#pragma once
#include "BaseAccount.h"
class CheckingAccount :
    public BaseAccount
{
public:
    void Withdraw(double amount);
    void Deposit(double amount);
};

