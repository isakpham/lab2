#include <iostream>
using namespace std;

void shrink_array(int arr[], int size){
	
	for (int i = 0; i < size; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;
	if (size%2 != 0)
	{
		size = size - 1;
	}
	int restSize = size / 2;
	
	for (int i = 0; i < size; i = i+2)
	{
		int j = i + 1;
		arr[i] = arr[i] + arr[j];
		
	}
	
	for ( int i = 1; i < size - 2;  i++)
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

int main() {
	int arr[] = { 2,6,26,7,8 };
	int numOfElements = (sizeof(arr) / sizeof(arr[0]));
	shrink_array(arr, numOfElements);
}