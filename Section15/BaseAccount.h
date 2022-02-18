#pragma once

#include <iostream>

using namespace std;

class BaseAccount
{
private:
	double balance = 0;
public:
	double GetBalance();
	void SetBalance(double amount);
	void DisplayBalance();
	BaseAccount();
	~BaseAccount();
};

