#include "CheckingAccount.h"


void CheckingAccount::Withdraw(double amount) {
	double balance = GetBalance();
	double const fee = 1.5;
	if ((balance - amount) >= 0) {
		balance -= amount+fee;
		SetBalance(balance);
		cout << amount << "$ withdrawal, your BA balance is " << GetBalance() << "$" << endl;
	}
	else cout << "Insufficient funds" << endl;
}

void CheckingAccount::Deposit(double amount) {
	double balance = GetBalance();
	balance += amount;
	SetBalance(balance);
	cout << "You deposit " << amount << "$, your BA balance is " << GetBalance() << "$" << endl;
}

