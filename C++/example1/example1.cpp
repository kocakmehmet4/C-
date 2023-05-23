#include <iostream>
#include "Triangle.h"
using namespace std;

int main()
{
	float a, b, c;
	cout << "Please enter the sides(a-b-c):";
	cin >> a >> b >> c;
	Triangle triangle1(a, b, c);
	Triangle triangle4 = { a,b,c };
	Triangle tirangle5{ a,b,c };
	Triangle triangle2 = triangle1; // or Triangle triangle2 (triangle1);
	Triangle triangle3(triangle1);

	cout << "-Triangle1-" << endl;
	cout << "Side A:" << triangle1.getSideA() << endl;
	cout << "Side B:" << triangle1.getSideB() << endl;
	cout << "Side C:" << triangle1.getSideC() << endl;
	cout << "Area:" << triangle1.calculateArea() << endl;
	triangle1.triangleType();


	cout << "-Triangle2-" << endl;
	triangle2.setValue(3, 4, 5);
	cout << "Side A:" << triangle2.getSideA() << endl;
	cout << "Side B:" << triangle2.getSideB() << endl;
	cout << "Side C:" << triangle2.getSideC() << endl;
	cout << "Area:" << triangle2.calculateArea() << endl;
	triangle2.triangleType();

}