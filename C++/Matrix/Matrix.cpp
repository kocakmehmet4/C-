#include<iostream>
#include"Matrix.h"
using namespace std;

int main() {
	Matrix mainMatrix;

	/*for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 5; j++) {
			mainMatrix.setValue(i, j, i * j);
		}
	}*/
	mainMatrix.randomSet();
	mainMatrix.display();
	Matrix mainMatrix2;
	mainMatrix2.identityMatrixSet();
	mainMatrix2.display();
	Matrix mainMatrix3 = mainMatrix2;
	mainMatrix3.display();
	Matrix mainMatrix4=mainMatrix.addMatrix(mainMatrix2);
	mainMatrix4.display();
}