#include <iostream>
#include"ComplexNumber.h"
using namespace std;
int main()
{
	ComplexNumber complex(4, 5);
	cout << "Real:" << complex.getReal() << endl;
	cout << "Imaginal:" << complex.getImaginal() << endl;
	complex.displayComplex();

	ComplexNumber complex2(3,-6);
	cout << "Real:" << complex2.getReal() << endl;
	cout << "Imaginal:" << complex2.getImaginal() << endl;
	complex2.displayComplex();

	ComplexNumber complex3(complex2);
	complex3.displayComplex();
	complex3.setValue(4, -7);
	complex3.displayComplex();

	cout << "----------------------------------" << endl;

	ComplexNumber resultMain;
	resultMain = complex.addComplex(complex2);
	resultMain.displayComplex();
	cout << "----------------------------------" << endl;

	ComplexNumber resultMain2;
	resultMain2 = complex.substractComplex(complex2);
	resultMain2.displayComplex();

	cout << "----------------------------------" << endl;
	
	ComplexNumber resultMain3;
	resultMain3 = complex.multiplyConstant(4);
	resultMain3.displayComplex();

	cout << "----------------------------------" << endl;

	ComplexNumber resultMain4;
	resultMain4 = complex.multiplyComplex(complex2);
	resultMain4.displayComplex();
}
