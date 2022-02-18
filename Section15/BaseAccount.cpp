#include "BaseAccount.h"

double BaseAccount::GetBalance() {
	return balance;
}

void BaseAccount::DisplayBalance() {
	cout << "Your BA balance is " << GetBalance() << "$" << endl;
}

void BaseAccount::SetBalance(double amount) {
	balance = amount;
}

BaseAccount::BaseAccount() {

}

BaseAccount::~BaseAccount() {

}