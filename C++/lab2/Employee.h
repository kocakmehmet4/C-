#include<iostream>

class Employee {
	public:
		Employee(string,string,int);
		void setName(string);
		string getName(string);
		void setSurname(string);
		string getSurname(string);
		void setSalary(int);
		int getSalary(int);
	private:
		int salary;
		string name, surname;
};

Employee::Employee() {
	
}
