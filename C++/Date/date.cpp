#include <iostream>
#include"date.h"
using namespace std;

int main()
{
	Date mainDate(02, 01, 2020);
	cout << "Day:" << mainDate.getDay() << endl;
	cout << "Month:" << mainDate.getMonth() << endl;
	cout << "Year:" << mainDate.getYear() << endl;
	mainDate.displayDate();
	
	Date mainDate2(01,01,2020);
	mainDate2.displayDate();
	mainDate.compareDate(mainDate2);

	cout << "-------------------------------" << endl;
	
	for (int i = 0; i < 30; i++) {
		mainDate.increaseDay();
		mainDate.displayDate();
	}

}
