#include <iostream>
#include"ComplexNumber.h"
using namespace std;

ComplexNumber::ComplexNumber(int r,int i) {
	real = r;
	imaginal = i;
	cout << "Complex Number is created." << endl;
}
ComplexNumber::~ComplexNumber() {
	cout << "Complex Number is destroyed." << endl;
}
ComplexNumber::ComplexNumber(const ComplexNumber& oth) {
	real = oth.real;
	imaginal = oth.imaginal;
	cout << "Complex Number is copied to target" << endl;
}
int ComplexNumber::getReal() const {
	return real;
}
int ComplexNumber::getImaginal() const {
	return imaginal;
}
void ComplexNumber::setValue(int r,int i) {
	real = r;
	imaginal = i;
}
void ComplexNumber::displayComplex() {
	imaginal >= 0 ? cout << real << "+" << imaginal << "i" << endl : cout << real << imaginal << "i" << endl;
}
ComplexNumber ComplexNumber::addComplex(const ComplexNumber& oth) {
	ComplexNumber result;
	result.real = real + oth.real;
	result.imaginal = imaginal + oth.imaginal;
	return result;
}
ComplexNumber ComplexNumber::substractComplex(ComplexNumber& oth) {
	ComplexNumber result;
	oth.multiplyMinus();
	result = addComplex(oth);
	return result;
}
void ComplexNumber::multiplyMinus() {
	real *= -1;
	imaginal *= -1;
}
ComplexNumber ComplexNumber::multiplyConstant(int constant) {
	ComplexNumber result;
	result.real = real * constant;
	result.imaginal = imaginal * constant;
	return result;
}
ComplexNumber ComplexNumber::multiplyComplex(const ComplexNumber& oth) {
	ComplexNumber result;
	result.real = real * oth.real - imaginal * oth.imaginal;
	result.imaginal = real * oth.imaginal + imaginal * oth.real;
	return result;

}
