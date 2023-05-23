#include<iostream>
using namespace std;

class Date {
public:
	Date(int d = 1, int m = 1, int y = 1900);
	~Date();
	Date(const Date& oth);
	void setDate(int d = 1, int m = 1, int y = 1800);
	void setDay(int d);
	void setMonth(int m);
	void setYear(int y);
	int getDay() const {
		return day;
	}
	int getMonth() const {
		return month;
	}
	int getYear() const {
		return year;
	}
	void increaseDay();
	void compareDate(const Date& othDate);
	void displayDate();

private:
	int day, month, year;
	const int monthDays[12] = { 31,29,31,30,31,30,31,31,30,31,30,31 };
	const string monthString[12] = { "January","February","March","April","May","June","July","August","September","October","November","December" };

};
Date::Date(int d, int m, int y) {
	setDate(d, m, y);
}
Date::~Date() {
	cout << "Date is destroyed." << endl;
}
Date::Date(const Date& oth) {
	day = oth.day;
	month = oth.month;
	year = oth.year;
	cout << "Date is copied to target." << endl;
}
void Date::setDay(int d) {
	if (d >= 1 && d <= monthDays[month - 1]) {
		day = d;
	}
	else {	
		day = 1;
	}
}
void Date::setMonth(int m) {
	if (m >= 1 && m <= 12) {
		month=m;
	}
	else {
		month = 1;
	}
}
void Date::setYear(int y) {
	y >= 1900 ? year = y : year = 1900;
}
void Date::setDate(int d, int m, int y) {
	setMonth(m);
	setDay(d);
	setYear(y);
		
}
void Date::displayDate() {
	cout << day << " " << monthString[month-1] << " " << year << endl;
}
void Date::increaseDay() {
	if (day < monthDays[month - 1]) {
		day += 1;
	}
	else {
		day = 1;
		if (month < 12) {
			month++;
		}
		else {
			year++;
			month = 1;
		}
	}

}
void Date::compareDate(const Date& oth) {
	long firstDate;
	long secondDate;
	firstDate = year * 365 + month * 30 + day;
	secondDate = oth.year * 365 + oth.month * 30 + oth.day;
	if (firstDate > secondDate) {
		cout << "First date is greater." << endl;
	}
	else if (firstDate < secondDate) {
		cout << "Second date is greater." << endl;
	}
	else{
		cout << "Both of them is equal." << endl;
	}
}		


