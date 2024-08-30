//NAME: Hajar Wilkes
//PROGRAM: Program 2-Numbers
// DATE: August, 30, 2024
/*
 DESCRIPTION: Inputting four numbers and printing them in increasing and decreasing order,
 and largest, smallest, average order
 */



 // AUG20COMPSCI201_EXAMPLE 2.cpp : This file contains the 'main' function. Program execution begins and ends there.
 // input 4 numbers
 // print in increasing and decreasing order
 // print largest, smallest, average

#include <iostream>

using namespace std;

void insertionSort(int arr[], int length) {
	for (int i = 1; i < length; i++) {
		int key = arr[i];
		int j = i - 1;

		// Move elements of arr[0..i-1], that are greater than key,
		// to one position ahead of their current position
		while (j >= 0 && arr[j] > key) {
			arr[j + 1] = arr[j];
			j--;
		}
		arr[j + 1] = key;
	}
}
int main()
{
	char repeat;

	do {
		int arr1[4];
		int sum = 0;
		//input 4 values
		cout << "Enter four values\n";
		for (int i = 0; i < 4; ++i) {
			cin >> arr1[i];
			
			sum = sum + arr1[i];

		}
		insertionSort(arr1, 4);

		cout << "Array in Ascending Order: ";
		for (int i = 0; i < 4; ++i) {
			cout << arr1[i] << " ";
		}



		cout << endl;

		cout << "Array in Descending Order: ";
		for (int i = 3; i >= 0; --i) {
			cout << arr1[i] << " ";
		}
		cout << endl;
		cout << "The smallest number is: " << arr1[0] << endl;
		cout << "The largest number is: " << arr1[3] << endl;
		cout << "The average is: " << sum / 4.0 << endl;

		cout << "Do you want to enter another set of numbers? (Y/N): ";
		cin >> repeat;
		repeat = toupper(repeat); // Convert to uppercase for consistency

	} while (repeat == 'Y');

	return 0;
}

