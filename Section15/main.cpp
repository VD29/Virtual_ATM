#include "TrustAccount.h"


int main() 
{

	SavingsAccount S;
	CheckingAccount B;
	TrustAccount T;

		char choice, basechoice, savechoice, trustchoice;
		int amount1, amount2, amount3, amount4, amount5;

		for (;;) {
			do {
				cout << "Choose the account: \n" << " 1. Base Account\n" << " 2. Savings Account\n" << " 3. Trust Account\n" << " Q - Quit\n";
				cin >> choice;

			} while (choice < '1' || choice > '3' && choice != 'q');
			if (choice == 'q') break;

			cout << "\n";

			switch (choice) {
			case '1':
				cout << "1. Deposit\n" << "2. Withdraw\n";
				cin >> basechoice;
				switch (basechoice) {
				case '1':
					cout << "Enter the amount to deposit: ";
					cin >> amount1;
					B.Deposit(amount1);
					break;
				case '2':
					cout << "Enter the amount to withdraw: ";
					cin >> amount2;
					B.Withdraw(amount2);
					break;
				}
				break;
			case '2':
				cout << "1. Deposit\n" << "2. Display balance\n";
				cin >> savechoice;
				switch (savechoice) {
				case '1':
					cout << "Enter the amount to deposit: ";
					cin >> amount3;
					S.Deposit(amount3);
					break;
				case '2':
					S.DisplayBalance();
					break;
				}
				break;
			case '3':
				cout << "1. Deposit\n" << "2. Withdraw\n" << "3. Display balance\n";
				cin >> trustchoice;
				switch (trustchoice) {
				case '1':
					cout << "Enter the amount to deposit: ";
					cin >> amount4;
					T.Deposit(amount4);
					break;
				case '2':
					cout << "Enter the amount to withdraw: ";
					cin >> amount5;
					T.Withdraw(amount5);
					break;
				case '3':
					T.DisplayBalance();
					break;
				}
				break;
			}
			cout << "\n";
		}
}