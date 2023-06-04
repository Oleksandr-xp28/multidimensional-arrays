// multidimensional arrays.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <ctime>
using namespace std;


int main() {

	srand(time(NULL));

	const int ROWS1 = 5;
	const int COLS1 = 10;

	const int ROWS2 = 5;
	const int COLS2 = 5;

	int array1[ROWS1][COLS1];
	int array2[ROWS2][COLS2];


	for (int i = 0; i < ROWS1; ++i) {
		for (int j = 0; j < COLS1; ++j) {
			array1[i][j] = rand() % 51; 
		}
	}


	for (int i = 0; i < ROWS2; ++i) {
		for (int j = 0; j < COLS2; ++j) {
			array2[i][j] = array1[i][2 * j] + array1[i][2 * j + 1];
		}
	}

	
	cout << "Array 1:" << endl;
	for (int i = 0; i < ROWS1; ++i) {
		for (int j = 0; j < COLS1; ++j) {
			cout << array1[i][j] << "\t";
		}
		cout << endl;
	}

	cout << endl;

	cout << "Array 2:" << endl;
	for (int i = 0; i < ROWS2; ++i) {
		for (int j = 0; j < COLS2; ++j) {
			cout << array2[i][j] << "\t";
		}
		cout << endl;
	}

	return 0;
}

// In the future, to open this project again, go to File > Open > Project and select the .sln file
