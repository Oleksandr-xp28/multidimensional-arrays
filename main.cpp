// multidimensional arrays.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main() {
	
	const int rows = 3;
	const int cols = 4;

	int arr[rows][cols] = {
	{ 1, 2, 3, 4 },
	{ 5, 6, 7, 8 },
	{ 9, 10, 11, 12 }
	};

	int sum = 0;
	int count = 0;
	int min = arr[0][0];
	int max = arr[0][0];

	for (int i = 0; i < rows; ++i) {
		for (int j = 0; j < cols; ++j) {
			sum += arr[i][j];
			count++;

			if (arr[i][j] < min) {
				min = arr[i][j];
			}

			if (arr[i][j] > max) {
				max = arr[i][j];
			}
		}
	}

	double mean = double(sum) / count;

	cout << "Sum: " << sum << endl;
	cout << "Mean: " << mean << endl;
	cout << "Minimum: " << min << endl;
	cout << "Maximum: " << max << endl;
	return 0;
}
// In the future, to open this project again, go to File > Open > Project and select the .sln file
