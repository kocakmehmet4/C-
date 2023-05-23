#include<iostream>
#include"Person.h"
#include<time.h>
using namespace std;

int main() {
	srand(time(NULL));
	Student studentArray[] = { {"Mehmet","Kocak",42541},{"Sinan","Kiliclar",56321},{"Oguzhan","Ozcan",34521},{"Yasin","Kilic",30512} };
	Teacher teacher1{ "Cemil","Kocak","Software" };
	teacher1.print();
	for (int i = 0; i < 4; i++) {
		studentArray[i].setStudentGrade(rand() % 100 + 1);
		studentArray[i].print();
	}
	
	teacher1.passFailStatus(studentArray,4);
	teacher1.printStudentInformation(studentArray,4);
	teacher1.print();
}