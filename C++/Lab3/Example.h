#include<iostream>
using namespace std;

class  SavingAccount {
private:
	static float annualInterestRate;
	float savingBalance;
public:
	SavingAccount(float x){
		
		if (savingBalance >= 0) {
			savingBalance = x;
		}
		else {
			savingBalance = 0;
		}
	}
	void calculateMonthlyInterest() {
		savingBalance += annualInterestRate / 12 * savingBalance;
	}
	
	static void modifyInterestRate(float x) {
		if (x > 0 && x <= 1) {
			annualInterestRate = x;
		}
		else {
		annualInterestRate=0.03;
		}
	}
	float getBalance()const { return savingBalance; };
	void printBalance() {
		cout << savingBalance << endl;
	}
};
 float SavingAccount::annualInterestRate = 0.0;