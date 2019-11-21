#include <iostream>
#include <cstdlib>
#include <vector>
#include <string>
#include <lab2lib.h>
using namespace std;
bool is_sorted(int parameter[], int numberofelements) {
	int isArraySorted = 0;

	for (int i = 0; i <= numberofelements; i++)
	{
		int z = i - 1;
		if (parameter[z] < parameter[i] && i != 0)
		{
			//cout << numberofelements << endl;
			//cout << (i - 1) << endl;
			//cout << isArraySorted << endl;
			isArraySorted++;
		}
	}
	if (isArraySorted == (numberofelements - 1))
	{
		return true;
	}
	else
	{

		return false;

	}
}

bool is_palindrome(char arr[], int size) {
	char* arrA = arr;
	for (int i = 0; i < size; i++)
	{
		arrA[size - i] = arr[i];
	}
	if (arrA == arr)
	{
		return true;
	}
	else
	{
		return false;
	}
}

void array_rows_cols(int* arr[], int cols, int rows) {
	int totsum = 0, rowsum = 0, colssum = 0;
	bool doneprinting = false;
	for (int i = 0; i < cols; i++)
	{
		for (int t = 0; t < rows; t++)
		{
			cout << arr[i][t] << " ";
			rowsum = rowsum + arr[i][t];
			if (t == rows - 1 && i == cols - 1)
			{
				doneprinting = true;
			}
		}
		cout << " " << rowsum << endl;;
		totsum = totsum + rowsum;
		rowsum = 0;
		if (doneprinting == true)
		{
			cout << endl;
			for (int r = 0; r < rows; r++)
			{
				for (int j = 0; j < cols; j++)
				{
					colssum = colssum + arr[j][r];;
				}
				cout << colssum << " ";
				colssum = 0;
			}

		}

		if (i == cols - 1)
		{
			cout << totsum;
			cout << endl;
		}
	}
}

void swap_sort(int& a, int& b, int& c, bool order) {
	int temp;
	if (order == true)
	{
		if (a < b && a < c)
		{
			if (c < b)
			{
				temp = b;
				b = c;
				c = temp;
				cout << a << b << c << endl;
			}
			else
			{
				cout << a << b << c << endl;
			}
		}

		if (b < a && b < c)
		{
			temp = b;
			b = a;
			a = temp;
			cout << a << b << c << endl;
		}


		if (c < a && c < b)
		{
			temp = c;
			if (b < a)
			{
				c = b;
				b = temp;
				cout << a << b << c << endl;
			}

		}

		if (a == b && a > c)
		{
			temp = c;
			c = a;
			a = temp;
			cout << a << b << c << endl;
		}
	}

	if (order == false)
	{


		if (c < a && c < b)
		{
			temp = c;
			if (b < a)
			{
				cout << a << b << c << endl;
			}
			else
			{
				cout << a << b << c << endl;
			}
		}

		if (b < a && b < c)
		{
			if (a < c)
			{
				temp = a;
				a = c;
				c = b;
				b = temp;
				cout << a << b << c << endl;
			}
		}

		if (a < b && a < c)
		{
			if (c < b)
			{
				temp = a;
				a = b;
				b = c;
				c = temp;
				cout << a << b << c << endl;
			}
			if (b < c)
			{
				temp = a;
				a = c;
				c = temp;
				cout << a << b << c << endl;
			}

		}

		if (c == b && c > a)
		{
			temp = a;
			a = c;
			c = temp;
			cout << a << b << c << endl;
		}
	}
}

void initialiseDatabase(vector<string> namedb) {
	string a;
	cout << "This is going to delete every name from the Database are you sure?" << endl;
	cin >> a;
	if (a == "Yes" || a == "yes")
	{
		namedb.clear();
	}

}

void insert(vector<string> namedb) {
	string name;
	bool backMenu = false;
	do
	{

		cout << "what want to add to the database?  (enter 'q' to return to the menu )" << endl;
		cin >> name;
		if (name == "q" || name == "Q")
		{
			backMenu = true;
		}
		if (backMenu == false)
		{
			namedb.push_back(name);;
		}

	} while (backMenu == false);

}


void search(vector<string> namedb) {
	string search;
	cout << "Enter name: " << endl;
	cin >> search;
	cout << endl;
	for (int i = 0; i < namedb.size(); i++)
	{
		if (namedb[i].find(search) == 0)
		{
			cout << namedb[i] << " ";
		}

	}
	cout << endl;
}

void deleteFrom(vector<string> namedb) {
	string search;
	cout << "Enter name you want to delete: " << endl;
	cin >> search;
	cout << endl;
	for (int i = 0; i < namedb.size(); i++)
	{
		if (namedb[i] == search)
		{
			namedb.erase(namedb.begin() + i);
		}

	}
}

void print(vector<string> namedb) {
	for (int i = 0; i < namedb.size(); i++)
	{
		cout << namedb[i] << " ";
	}
	cout << endl << endl;
}

void shrink_array(int arr[], int size) {

	for (int i = 0; i < size; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;
	if (size % 2 != 0)
	{
		size = size - 1;
	}
	int restSize = size / 2;

	for (int i = 0; i < size; i = i + 2)
	{
		int j = i + 1;
		arr[i] = arr[i] + arr[j];

	}

	for (int i = 1; i < size - 2; i++)
	{
		arr[i] = arr[i + i];
	}
	for (int i = restSize; i < size; i++)
	{
		arr[i] = 0;
	}

	for (int i = 0; i < size; i++)
	{
		cout << arr[i] << " ";
	}
}
