#include <iostream>
#include"Array.h"
using namespace std;
int main()
{

	Array mainArray(10);
	Array mainArray2(mainArray);
	cout << "Capacity:" << mainArray.getCapacity() << endl;
	cout << "Size:" << mainArray.getSize() << endl;

	cout << "Capacity:" << mainArray2.getCapacity() << endl;
	cout << "Size:" << mainArray2.getSize() << endl;


	mainArray.addItem(5);
	mainArray.addItem(12);
	mainArray.addItem(3);
	mainArray.addItem(8);
	mainArray.addItem(7);
	mainArray.addItem(41);
	mainArray.addItem(3);
	mainArray.addItem(5);
	mainArray.addItem(1);
	mainArray.addItem(3);
	mainArray.addItem(11);
	mainArray.addItem(12);
	mainArray.addItem(23);
	mainArray.printItems();
	mainArray.addItem(35);
	mainArray.printItems();

	Array mainArray3 = mainArray;
	mainArray3.printItems();
	mainArray3.addItem(22);
	mainArray3.addItem(33);
	mainArray3.addItem(44);
	mainArray3.printItems();

	mainArray3.removeIndexItem(14);
	mainArray3.printItems();

	mainArray3.removeItem(5);
	mainArray3.printItems();

	mainArray3.findElement(5);

}