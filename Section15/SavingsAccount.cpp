#include "SavingsAccount.h"

void SavingsAccount::Deposit(double amount) {
	double balance = GetBalance();
	balance += amount + amount*(int_rate/100);
	SetBalance(balance);
	cout << "You deposit " << amount << "$, your SA balance is " << GetBalance() << "$" << endl;
}

double SavingsAccount::GetBalance() {
	return balance;
}

void SavingsAccount::SetBalance(double amount) {
	balance = amount;
}

SavingsAccount::SavingsAccount() {
	
}

SavingsAccount::~SavingsAccount() {
	
}

void SavingsAccount::DisplayBalance() {
	cout << "Your SA balance is " << GetBalance() << "$" << endl;
}