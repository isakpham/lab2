#include <iostream>
using namespace std;

bool is_palindrome(char arr[], int size) {
	char *arrA = arr;
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

int main() {
	char arr[6] = { "madam" };
	int numOfElements = (sizeof(arr) / sizeof(arr[0]));
	cout << is_palindrome(arr, numOfElements) << endl;
	system("pause");
		return 0;
}