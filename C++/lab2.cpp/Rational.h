#include<iostream>
using namespace std;

class rational {
public:
	rational(int = 0, int = 1);
	~rational();
	rational addition(const rational &);
	rational substraction(const rational&);
	rational multiplication(const rational&);
	rational divison(const rational&);
	void display();
private:
	int pay, payda;
	void sadelestir();
};
rational::rational(int a,int b) {
	pay = a;
	payda = b;

}
rational::~rational() {

}
rational rational::addition(const rational &x) {
	rational result;
	result.pay = pay * x.payda + payda * x.pay;
	result.payda = payda * x.payda;
	result.sadelestir();
	return result;
}
rational rational::substraction(const rational& x) {
	rational result;
	result.pay = pay * x.payda - payda * x.pay;
	result.payda = payda * x.payda;
	result.sadelestir();
	return result;
}
rational rational::multiplication(const rational& x) {
	rational result;
	result.pay = pay * x.pay;
	result.payda = payda * x.payda;
	result.sadelestir();
	return result;
}
rational rational::divison(const rational& x) {
	rational result;
	if (pay == 0) {
		return 0;
	}
	else if (x.pay == 0 || payda == 0) {
		return -1;
	}
	result.pay = pay * x.payda;
	result.payda = payda* x.pay;
	result.sadelestir();
	return result;	
}
void rational::display() {
	cout << pay << "/" << payda << "=" << (float)pay / (float)payda << endl;
}
void rational::sadelestir() {
	for (int i = 2; i <=pay && i<=payda; i++) {
		while (pay % i == 0 && payda % i == 0) {
			pay /= i;
			payda /= i;
		}
	}

}
