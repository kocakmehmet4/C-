#include<iostream>
#include"PersonToEmployee.h"
using namespace std;

int main() {


	Employee employee1 = { "Mehmet","Kocak","SOFTWARE","ENGINNER",45000,5 };
	Employee employee4 = { "Ogun","Birinci","SOFTWARE","ENGINNER",45000,5 };
	Employee employee2 = { "OGUZHAN","OZCAN","IT","PROGRAMMER",30000,7 };
	Employee employee3 = { "Burak","ikinci","Accounting","Predisent",40000,8 };
	Manager manager1 = { "Eren","Zulal","SOFTWARE","MANAGER",45000,5 };
	Manager manager2 = { "Sinan","Kiliclar","IT","MANAGER",45000,5 };
	
	Employee employeeList[] = { employee1,employee2,employee3,employee4 };
	manager1.extractEmployees(employeeList);
}