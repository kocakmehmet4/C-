#include <iostream>
using namespace std;

class ComplexNumber {
public:
	ComplexNumber(int r=0,int i=0);
	~ComplexNumber();
	ComplexNumber(const ComplexNumber& oth);
	int getReal() const ;
	int getImaginal() const;
	void setValue(int r = 0, int i = 0);
	ComplexNumber addComplex(const ComplexNumber& oth);
	ComplexNumber multiplyComplex(const ComplexNumber& oth);
	ComplexNumber substractComplex(ComplexNumber& oth);
	ComplexNumber multiplyConstant(int constant);
	void multiplyMinus();
	void displayComplex();

private:
	int real, imaginal;
};