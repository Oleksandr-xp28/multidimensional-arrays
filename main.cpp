// multidimensional arrays.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <ctime>
using namespace std;


int main() {
	srand(time(NULL));

	const int col = 5;
	const int row = 5;
	int arr[col][row];

	for (size_t i = 0; i < col; i++) {
		for (size_t j = 0; j < row; j++) {
			arr[i][j] = rand() % 10;
			cout << arr[i][j] << "\t";
		}
		cout << endl << endl;
	}

	cout << endl << endl;

	int sumRow[col] = { 0 };
	int sumColumn[row] = { 0 };
	int totalSum = 0;

	for (size_t i = 0; i < col; i++) {
		for (size_t j = 0; j < row; j++) {
			sumRow[i] += arr[i][j];
			sumColumn[j] += arr[i][j];
			totalSum += arr[i][j];
		}
	}

	for (size_t i = 0; i < col; i++) {
		cout << "Sum of elements in row " << i + 1 << ": " << sumRow[i] << endl;
	}
	cout << endl;

	for (size_t j = 0; j < row; j++) {
		cout << "Sum of elements in column " << j + 1 << ": " << sumColumn[j] << endl;
	}
	cout << std::endl;

	cout << "Sum of all elements: " << totalSum << endl;

	return 0;
}

// In the future, to open this project again, go to File > Open > Project and select the .sln file
