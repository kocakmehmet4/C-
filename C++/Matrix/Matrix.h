#include<iostream>
#include<string>
using namespace std;

class Matrix {
public:
	Matrix(int r = 5, int c = 5);
	~Matrix();
	Matrix(const Matrix& oth);
	int getRowNumber() { return row; };
	int getColumnNumber() { return col; };
	void setValue(int r, int c, int value);
	void randomSet();
	void identityMatrixSet();
	void display();
	Matrix addMatrix(const Matrix& othMatrix);
private:
	int row, col;
	int** matrix;
};
Matrix::Matrix(int r, int c) {
	if (r > 0 && c > 0) {
		row = r;
		col = c;
	}
	else {
		row = 5;
		col = 5;
	}
	matrix = new int* [row];
	for (int i = 0; i < r; i++) {
		matrix[i] = new int[col];
	}
	cout << "Matrix is created." << endl;	
	cout << "Row:" << row << "  " << "Col:" << col << endl;
}
Matrix::~Matrix() {

	for (int i = 0; i < row; i++) {
		delete[] matrix[i];
	}
	delete[]matrix;
	cout << "Matrix is destroyed." << endl;
/*
matrix[0]-> - - - - -
matrix[1]-> - - - - -
matrix[2]-> - - - - -
matrix[3]-> - - - - -
matrix[4]-> - - - - -
*/
}
Matrix::Matrix(const Matrix& oth) {
	row = oth.row;
	col = oth.col;
	matrix = new int* [row];
	for (int i = 0; i < row; i++) {
		matrix[i] = new int[col];
	}
	for (int i = 0; i < row; i++) {
		for (int j = 0; j < col; j++) {
			matrix[i][j] = oth.matrix[i][j];
		}
	}
	cout << "Matrix is copied to target." << endl;
}
void Matrix::setValue(int r, int c, int value) {
	matrix[r][c] = value;
}
void Matrix::display() {
	cout << "Matrix:" << endl;
	for (int i = 0; i < row; i++) {
		for (int j = 0; j < col; j++) {
			cout << matrix[i][j] << " ";
		}
		cout << endl;
	}
	cout << endl;
}
void Matrix::randomSet() {
	srand(time(NULL));
	for (int i = 0; i < row; i++) {
		for (int j = 0; j < col; j++) {
			matrix[i][j] = rand() % 10;
		}
	}
}
void Matrix::identityMatrixSet() {
	for (int i = 0; i < row; i++) {
		for (int j = 0; j < col; j++) {
			if (i == j) {
				matrix[i][j] = 1;
			}
			else {
				matrix[i][j] = 0;
			}
		}
	}
}
Matrix Matrix::addMatrix(const Matrix& othMatrix) {
	if (row != othMatrix.row || col != othMatrix.col) {
		cout << "Row and column should be equal." << endl;
	}
	else {
		Matrix result(row, col);
		for (int i = 0; i < result.row; i++) {
			for (int j = 0; j < result.col; j++) {
				result.matrix[i][j] = matrix[i][j] + othMatrix.matrix[i][j];
			}
		}
		return result;
	}
}
//void Matrix::addMatrix(const Matrix& othMatrix){
//	if (row != othMatrix.row || col!=othMatrix.col) {
//		cout << "Row and column should be equal." << endl;
//		return;
//	}
//	Matrix result(row, col);
//	for (int i = 0; i < result.row; i++) {
//		for (int j = 0; j < result.col; j++) {
//			result.matrix[i][j] = matrix[i][j] + othMatrix.matrix[i][j];
//		}
//	}
//	result.display();
//}