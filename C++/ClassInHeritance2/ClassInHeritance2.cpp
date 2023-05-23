#include<iostream>
#include"ARRAY.h"
using namespace std;

int main() {

	unsortedArray usArray(10);
	sortedArray sArray(10);

	usArray.addItems(2);
	usArray.addItems(4);
	usArray.addItems(20);
	usArray.addItems(12);
	usArray.addItems(24);
	usArray.addItems(32);
	usArray.addItems(15);
	usArray.addItems(17);
	usArray.addItems(42);
	usArray.addItems(56);
	usArray.addItems(78);
	usArray.removeIndexItem(0);
	usArray.removeItem(78);
	cout << "Aranan index:" << usArray.findIndex(15) << endl;
	usArray.printItems();

	sArray.addItems(2);
	sArray.addItems(4);
	sArray.addItems(20);
	sArray.addItems(12);
	sArray.addItems(24);
	sArray.addItems(32);
	sArray.addItems(15);
	sArray.addItems(17);
	sArray.addItems(42);
	sArray.addItems(56);
	sArray.addItems(78);
	sArray.removeItem(78);
	sArray.removeIndexItem(0);
	sArray.printItems();
}