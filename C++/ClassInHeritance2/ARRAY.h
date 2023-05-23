#include<iostream>
using namespace std;

class Array {
protected:
	int* data, size, capacity;
public:
	Array(int user_capacity = 5) {
		capacity = user_capacity; 
		data = new int[capacity];
		size = 0;
	};
	~Array() {
		delete[]data;
	}
	Array(const Array& oth) {
		capacity = oth.capacity;
		size = oth.size;
		data = new int[capacity];
		for (int i = 0; i < size; i++) {
			data[i] = oth.data[i];
		}
	}
	void printItems() {
		if (size != 0) {
			for (int i = 0; i < size; i++) {
				cout << data[i] << " ";
			}
		}
		cout << "\nCapacity:" << capacity << " " << "Size:" << size << endl;
	}
	void removeIndexItem(int index) {
		if (index<0 || index>capacity) {
			cout << "ERORR No item at the index." << index << endl;
			return;
		}
		for (int i = index; i < size; i++) {
			data[i] = data[i + 1];
		}
		size -= 1;
		cout << "Item is sucessfully deleted." << endl;
	}
	void removeItem(int number) {
		int counter = 0;
		for (int i = 0; i <= size; i++) {
			if (data[i] == number) {
				for (int j = i; j < size; j++) {
					data[j] = data[j + 1];
				}
				counter++;
			}
			
		}
		cout << counter << "Items(" << number << ")" << "are deleted from the Array" << endl;
		size -= counter;
	}
	int findIndex(int a) {
		for (int i =0; i < size; i++) {
			if (data[i] == a) {
				return data[i];
			}
		}
		return -1;
	}
	void addItems(int number) {
		if (capacity == size) {
			int* temp_data = new int[capacity * 2];
			for (int i = 0; i < size; i++) {
				temp_data[i] = data[i];
			}
			delete[]data;
			data= temp_data;
			capacity *= 2;
		}
		data[size] = number;
		size++;
	}
};
class unsortedArray :public Array {
public:
	unsortedArray(int user_capacity = 5) :Array(user_capacity) {};
	unsortedArray(const unsortedArray& oth) :Array(oth) {};
	void printItems() {
		cout << "Unsorted Array:";
		Array::printItems();
	}
};
class sortedArray :public Array {
public:
	sortedArray(int user_capacity = 5) :Array(user_capacity) {};
	sortedArray(const unsortedArray& oth) :Array(oth) {};
	void addItems(int number) {
		int i;
		if (size == capacity) {
			int* temp_data = new int[capacity * 2];
			for ( i = 0; i < size; i++) {
				temp_data[i] = data[i];
			}
			delete[]data;
			data = temp_data;
			capacity *= 2;
		}
		for ( i = size - 1; (i >= 0 && data[i] > number); i--) {
			data[i + 1] = data[i];
		}
		data[i + 1] = number;
		size++;

	}
	void printItems() {
		cout << "Sorted Array:";
		Array::printItems();

	}

};