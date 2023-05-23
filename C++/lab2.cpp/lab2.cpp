#include <iostream>
#include"Rational.h"
using namespace std;
int main()
{
    rational c(4, 6),d(3,6);
    rational e=c.addition(d);
    cout << "Toplama Sonuc:" << endl;
    e.display();
    e = c.multiplication(d);
    cout << "Carpma Sonuc:" << endl;
    e.display();
    e = c.divison(d);
    cout << "Bolme Sonuc:" << endl;
    e.display();
    cout << "-------------------------------\n";
    e = c.substraction(d);
    cout << "Cikarma Sonuc:" << endl;
    e.display();
}

