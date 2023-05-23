#include<iostream>
class Array {
public:
	Array(int user_capacity = 5);
	~Array();
	Array(const Array& copyArray);
	int getSize() const;
	int getCapacity() const;
	void addItem(int num);
	void printItems();
	void removeIndexItem(int index);
	void removeItem(int num);
	void findElement(int num, int b = 0);
private:
	int *data, size, capacity;
	int findIndex(int num, int b = 0);
};
