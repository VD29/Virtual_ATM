#include "TrustAccount.h"

void TrustAccount::Deposit(double amount) {
	double max = 5000.0;
	double balance = GetBalance();
	if (amount < max) {
		balance += amount + amount * (int_rate / 100);
	}
	else {
		balance += amount + amount * (int_rate / 100) + 50;
	}
	SetBalance(balance);
	cout << "You deposit " << amount << "$, your TA balance is " << GetBalance() << "$" << endl;
}

void TrustAccount::Withdraw(double amount) {
	double balance = GetBalance();
	if (((balance - amount) >= 0) && (amount < 0.2*balance)) {
		balance -= amount;
		SetBalance(balance);
		cout << amount << "$ withdrawal, your TA balance is " << GetBalance() << "$" << endl;
	}
	else cout << "Insufficient funds" << endl;
}

void TrustAccount::DisplayBalance() {
	cout << "Your TA balance is " << GetBalance() << "$" << endl;
}

double TrustAccount::GetBalance() {
	return balance;
}

void TrustAccount::SetBalance(double amount) {
	balance = amount;
}

TrustAccount::TrustAccount() {

}

TrustAccount::~TrustAccount() {

}

