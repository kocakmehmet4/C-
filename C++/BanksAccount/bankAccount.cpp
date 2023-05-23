#include <iostream>
#include"bankAccount.h"
using namespace std;
int main()
{
	Account acc1("Mehmet", "Kocak",1500,"05075544143");
	cout << "Name:" << acc1.getName() << endl;
	cout << "Surname:" << acc1.getSurname() << endl;
	cout << "Phone:" << acc1.getPhoneNumber() << endl;
	cout << "Balance:" << acc1.getBalance() << endl;
	
	Account acc2 = acc1;
	cout << "Name:" << acc2.getName() << endl;
	cout << "Surname:" << acc2.getSurname() << endl;
	cout << "Phone:" << acc2.getPhoneNumber() << endl;
	cout << "Balance:" << acc2.getBalance() << endl;
	
	acc1.credit(1500);
	acc1.displayProfile();
	acc1.withdraw(150);
	acc1.displayProfile();

	Account acc3("Ali", "Nazik");
	acc3.displayProfile();
	acc1.sendMoney(acc3,5000);
	acc3.displayProfile();
	acc1.displayProfile();
}

