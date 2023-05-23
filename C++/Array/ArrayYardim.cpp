#include<iostream>
#include"Array.h"
using namespace std;

Array::Array(int user_capacity) {
	capacity = user_capacity;
	size = 0;
	data = new int[capacity];
	cout << "Array is created with capacity " << capacity << endl;
}
Array::~Array() {
	delete[] data;
	cout << "Array is destroyed." << endl;
}
Array::Array(const Array& copyArray){
	capacity = copyArray.capacity;
	size = copyArray.size;
	data = new int[capacity];
	for (int i = 0; i < copyArray.size; i++) { //normal olarak size de yazilabilirdi
		data[i] = copyArray.data[i];
	}
	cout << "Array is copied to target." << endl;
}
int Array::getSize() const {
	return size;
}
int Array::getCapacity() const {
	return capacity;
}
void Array::addItem(int num) {
	if (size == capacity) {
		int* temp_data = new int[capacity * 2];
		for (int i = 0; i < size; i++) {
			temp_data[i] = data[i];
		}
		delete[] data;
		data = temp_data;
		capacity *= 2;
	}
	data[size] = num;
	size++;
}
void Array::printItems() {
	if (size != 0) {
		for (int i = 0; i < size; i++) {
			cout << data[i] << "-";
		}
	}
	cout << "\n" << "Capacity:" << capacity <<"  " << "Size:" << size << endl;
}
void Array::removeIndexItem(int index) {
	
	if (index<0 || index>=size) {
		cout << "ERORR No item at the index" << index << endl;
		return;
	}
	int removeItem = data[index];
	for (int i = index; i < size; i++) {
		data[i] = data[i + 1];
	}
	size -= 1;
	cout << "Item " << removeItem << "is deleted" << endl;
	// 5 3 2 1 6
	// 5 2 1 6 -
}
void Array::removeItem(int num) {
	int counter = 0;
	for (int i = 0; i < size; i++) {
		if (data[i] == num) {
			for (int j = i; j < size; j++) {
				data[j] = data[j + 1];
			}
			counter += 1;
			i -= 1;
		}
	}
	cout << counter << "items (" << num << ") are deleted from array" << endl;
	size -= counter;
 // 5 12 3 8 16 7 3 13 41
 // 5 12 8 16 7 3 13 41 -
 // 5 12 8 16 7 13 41 -
}
int Array::findIndex(int num,int index) {
	for (int i = index; i < size; i++) {
		if (data[i] == num) {
			return i;
		}
	}
	return -1;
}
void Array::findElement(int num, int index) {
	int result = findIndex(num, index);
	if (result != -1) {
		cout << num << "Found at index" << result << endl;
	}
	else {
		cout << num << "not found in the array" << endl;
	}
}