#include<iostream>
#include<string>
using namespace std;

class Person {
protected:
	string personName, personSurname;
public:
	Person(string name="", string surname="") {
		personName = name;
		personSurname = surname;
	}
	string getPersonName()const { return personName; };
	string getPersonSurname()const { return personSurname; };
	void setPersonName(string name) { personName = name; };
	void setPersonSurname(string surname) { personSurname = surname; };
	void print() {
		cout << "Name-Surname:" << personName << " " << personSurname << endl;
	}
};
class Student :public Person {
private:
	int studentID, studentGrade;
	bool passorFail;
public:
	Student(string name, string surname ,int ID):Person(name,surname) {
		studentID = ID;
	}
	int getStudentID()const { return studentID; };
	int getStudentGrade()const { return studentGrade; };
	int getStudentPassorFail()const { return passorFail; };
	void setStudentID(int ID) { studentID = ID; };
	void setStudentGrade(int grade) { studentGrade = grade; };
	void setStudentPassorFail(bool passOrFail) { passorFail = passOrFail; };
	void print() {
		Person::print();
		cout << "ID:" << studentID << endl << "Grade:" << studentGrade << endl;
	}
};
class Teacher :public Person {
private:
	string department;
public:
	Teacher(string name, string surname, string depart) : Person(name, surname) {
		department = depart;
	}
	string getDepartment()const { return department; };
	void setDepartment(string depart) { department = depart; };
	void print() {
		Person::print();
		cout << "Department:" << department << endl;
	}
	void passFailStatus(Student* Array,int number) {
		float average=0.0;
		for (int i = 0; i < number; i++) {
			average += Array[i].getStudentGrade();
		}
		average = (float) average / number;
		cout << "CLASS AVERAGE:" << average << endl;
		cout << "-----------------------------------------------\n";
		for (int i = 0; i < number; i++) {
			if (average <= Array[i].getStudentGrade()) {
				Array[i].setStudentPassorFail(true);
			}
			else {
				Array[i].setStudentPassorFail(false);
			}
		}
	}
	void printStudentInformation(Student* Array,int number) {
		for (int i = 0; i < number; i++) {
			Array[i].print();
			if (Array[i].getStudentPassorFail() == true) {
				cout << "-PASS-" << endl;
			}
			else {
				cout << "-FAIL-" << endl;
			}
		}
	}
};