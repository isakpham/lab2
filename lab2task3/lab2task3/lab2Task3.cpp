#include <iostream>
#include <cstdlib>

using namespace std;

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

int main() {
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