#include <iostream>
#include <labblib2.h>
#include <vector>
using namespace  std;
vector<string> namedb;

void task1(){
	int intArray[] = { 2, 1, 8, 23 ,889 };
	int numOfElements = (sizeof(intArray) / sizeof(intArray[0]));
	cout << is_sorted(intArray, numOfElements) << endl;
}

void task2() {
	char arr[6] = { "madam" };
	int numOfElements = (sizeof(arr) / sizeof(arr[0]));
	cout << is_palindrome(arr, numOfElements) << endl;
}


void task3() {
	int rows, cols;

	cout << "Number of rows: " << endl;
	cin >> rows;
	cout << "Number of columns" << endl;
	cin >> cols;

	int** arr = new int* [cols];
	for (int i = 0; i < rows; i++)
	{
		arr[i] = new int[rows];
	}

	for (int s = 0; s < cols; s++)
	{

		for (int j = 0; j < rows; j++)
		{
			int intrand = rand() % 10;
			arr[s][j] = intrand;
		}

	}

	cin.get();
	array_rows_cols(arr, cols, rows);

}


void task4() {
	int a, b, c;
	do
	{
		bool order;
		cout << "Enter 3 integers (Press enter between each one) or 0 to exit: ";
		cin >> a;
		cin >> b;
		cin >> c;
		cout << "sord by ascending/decending (1/0): ";
		cin >> order;
		swap_sort(a, b, c, order);
	} while (a != 0);
}

void task5(){
	int arr[] = { 2,6,26,7,8 };
	int numOfElements = (sizeof(arr) / sizeof(arr[0]));
	shrink_array(arr, numOfElements);
}

void task6(vector<string> &namedb) {
	int menuNumber;
	bool menu = true;
	do
	{
		cout << "1. initialise database" << endl << "2. insert" << endl << "3. search " << endl << "4. delete" << endl << "5. print" << endl << "6. quit" << endl;
		cin >> menuNumber;
		if (menuNumber == 1) {
			initialiseDatabase(namedb);
		}
		if (menuNumber == 2) {
			insert(namedb);
		}
		if (menuNumber == 3) {
			search(namedb);
		}
		if (menuNumber == 4) {
			deleteFrom(namedb);
		}
		if (menuNumber == 5) {
			print(namedb);
		}
		if (menuNumber == 6) {
			menu = false;
		}

	} while (menu == true);
}

int main() {
	int number;
	do
	{
	cout << "1. task1 " << endl << "2. task2 " << endl << "3. task3 " << endl << "4. task4 " << endl << "5. task5 " << endl << "6. task6 " << endl << "7. quit " << endl;
	cin >> number;

	if (number == 1)
	{
		task1();
	}
	
	if (number == 2)
	{
		task2();
	}

	if (number == 3)
	{
		task3();
	}

	if (number == 4)
	{
		task4();
	}

	if (number == 5)
	{
		task5();
	}

	if (number == 6)
	{
		task6(namedb);
	}

	if (number == 7)
	{

	}
	
	} while (number != 7);
	
	}