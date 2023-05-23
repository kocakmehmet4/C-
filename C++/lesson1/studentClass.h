#include<iostream>
using namespace std;
/*
Erisim belirleyiciler
private -> varsayilan((default)hicbirsey yazmazsak private'tir.) sadece sinifin icerisinden erisilebilir.
protected ->sadece class icerisinde ve miras alan classlarda erisilebilir.
public -> her yerden erisilebilir.
*/
class Student {
private:
	string studentName, studentSurname, studentID;//UYE DEGISKENLER(MEMBER VARIABLES)

public:
	Student();
	Student(string, string, string);
	~Student();
	void displayInformation();//Uye fonsiyonu(member function)
	void setName(string name) {
		studentName = name;
	}
	void setSurname(string surname) {
		studentSurname = surname;
	}
	void setID(string ID) {
		studentID = ID;
	}
	string getName() {
		return studentName;
	}
	string getSurname() {
		return studentSurname;
	}
	string getID() {
		return studentID;
	}
	void setInformation(string name, string surname, string ID) {
		studentName = name;
		studentSurname = surname;
		studentID = ID;

	}
};
Student::Student() {
	cout << "Constructor is Worked" << endl;
}
Student::Student(string name, string surname, string ID) {
	studentName = name;
	studentSurname = surname;
	studentID = ID;
}
Student::~Student() {
	cout << "Destractor Worked." << endl;
}
void Student::displayInformation() {
	cout << "Name:" << studentName << " " << studentSurname << endl;
	cout << "ID:" << studentID << endl;
}
