#include<iostream>
#include<string>
using namespace std;

class Account {
public:
	Account(string name, string surname, float balance = 0, string phone_number = "");
	~Account();
	Account(const Account& oth);
	bool controlNameSurname(string NameorSurname);
	bool controlPhoneNumber(string phoneNumber);
	void displayProfile();
	void credit(float);
	void withdraw(float);
	void sendMoney(Account& oth, float amount);
	void setPersonName(string name);
	void setPersonSurname(string surname);
	void setPersonNumber(string phone_number);
	void setPersonBalance(float balance=0);
	float getBalance()const { return accountBalance; };
	string getName()const { return personName; };
	string getSurname()const { return personSurname; };
	string getPhoneNumber()const { return personPhone; };
private:
	string personName, personSurname, personPhone;
	float accountBalance;
};
bool Account::controlNameSurname(string NameorSurname) {
	for (unsigned i = 0; i < NameorSurname.length(); i++) {
		if (!((NameorSurname.at(i) >= 'A' && NameorSurname.at(i) <= 'Z') || (NameorSurname.at(i) >= 'a' && NameorSurname.at(i) <= 'z'))) {
			return false;
		}
	}
	return true;
}
bool Account::controlPhoneNumber(string phoneNumber) {
	if (phoneNumber.empty()) {
		return true;
	}
	if (phoneNumber.length() != 11) {
		return false;
	}
	for (int i = 0; i < phoneNumber.length(); i++) {
		if (!(phoneNumber.at(i) >= '0' && phoneNumber.at(i) <= '9')) {
			return false;
		}
	}
	return true;

}
Account::Account(string name, string surname, float balance, string phone_number) {
	setPersonName(name);
	setPersonSurname(surname);
	setPersonNumber(phone_number);
	setPersonBalance(balance);
}
Account::~Account() {
	cout << "Bank Account is destroyed." << endl;
}
Account::Account(const Account& oth) {
	personName = oth.personName;
	personSurname = oth.personSurname;
	personPhone = oth.personPhone;
	accountBalance = oth.accountBalance;
	cout << "Bank Account is copied to target." << endl;
}
void Account::setPersonName(string name) {
	while (!controlNameSurname(name)) {
		cout << "Invalid Name! Please enter your name:";
		getline(cin, name);
	}
	personName = name;
}
void Account::setPersonSurname(string surname) {
	while (!controlNameSurname(surname)) {
		cout << "Invalid Surname! Please enter your name:";
		getline(cin, surname);
	}
	personSurname = surname;
}
void Account::setPersonNumber(string phone_number) {
	while (!controlPhoneNumber(phone_number)) {
		cout << "Invalid your Phone Number! Please enter your Phone Number:";
		getline(cin, phone_number);
	}
	personPhone = phone_number;
}
void Account::setPersonBalance(float balance) {
	if (balance <= 0) {
		accountBalance = 0;
	}
	else {
		accountBalance = balance;
	}
}
void Account::credit(float amount) {
	while (amount <= 0) {
		cout << "Invalid amount! Please enter valid amount:" << endl;
		cin>> amount;
	}
	accountBalance += amount;
}
void Account::withdraw(float amount) {
	while (amount > accountBalance ||amount<=0) {
		cout << "Invalid amount! Please enter valid amount:" << endl;
		cin >> amount;
	}
	accountBalance -= amount;
}
void Account::displayProfile(){
	cout << "----------------------------------------------------" << endl;
	cout << "Name:" << personName << "\n" << "Surname:" << personSurname << endl;
	!personPhone.empty() ? cout << "Phone Number:" << personPhone << endl : cout << "Phone Number:None" << endl;
	cout << "Balance:" << accountBalance << endl;
}
void Account::sendMoney(Account& oth, float amount) {
	while (amount > accountBalance || amount <= 0) {
		cout << "Invalid amount! Please enter valid amount:" << endl;
		cin >> amount;
	}
	accountBalance -= amount;
	oth.accountBalance += amount;
}

