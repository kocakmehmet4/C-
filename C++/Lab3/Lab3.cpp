#include<iostream>
#include"Example.h"
using namespace std;

int main() {

	SavingAccount saver1(2000.0);
	SavingAccount saver2(2000.0);
	SavingAccount::modifyInterestRate(0.03);

	cout << "Initial balances:\nSaver 1:";
	saver1.printBalance();
	cout << "\tSaver 2:";
	saver2.printBalance();

	saver1.calculateMonthlyInterest();
	saver2.calculateMonthlyInterest();
	cout << "\n\nBalances afer 1 month's interest applied at";
	
}