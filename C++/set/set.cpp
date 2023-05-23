#include <iostream>
using namespace std;

class Array {
private:
	int size;
	int* data, * temp_data;
public:
	Array(int boyut) {
		size = boyut;
		data = new int[size];
		temp_data = new int[size];

	}
	~Array() {
		delete[]data;
		delete[]temp_data;
	}
	Array(const Array& oth) {
		size = oth.size;
		data = new int[size];

		for (int i = 0; i < size; i++) {
			oth.data[i] = data[i];
		}

	}
	void addItem() {
		srand(time(NULL));
		for (int i = 0; i < size; i++) {
			data[i] = rand() % 50 + 1;
		}
		for (int i = 0; i < size; i++) {
			temp_data[i] = rand() % 50 + 1;
		}


	}
	int getSize() { return size; };
	void print() {
		cout << "First Array :";
		for (int i = 0; i < size; i++) {
			cout << data[i] << " ";
		}
		cout << endl;
		cout << "Second Array :";
		for (int i = 0; i < size; i++) {
			cout << temp_data[i] << " ";
		}

		cout << "\nNew Array:";
		for (int i = 0; i < size; i++) {
			for (int j = 0; j < size; j++) {
				if (temp_data[i] == data[j]) {
					cout << temp_data[i] << " ";
				}
			}

		}
	}
};

int main()
{
    Array array1(10);
    array1.addItem();
    array1.getSize(); 
    array1.print();
}

