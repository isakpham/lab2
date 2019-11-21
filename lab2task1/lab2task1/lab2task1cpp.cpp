#include <iostream>
using namespace std;

bool is_sorted(int parameter[], int numberofelements){
	int isArraySorted = 0;
	
	for (int i = 0; i <= numberofelements; i++)
	{
		int z = i - 1;
		if (parameter[z] < parameter[i] && i != 0 )
		{
			//cout << numberofelements << endl;
			//cout << (i - 1) << endl;
			//cout << isArraySorted << endl;
			isArraySorted++;
		}
	}
	if (isArraySorted  == (numberofelements - 1))
	{
		return true;
	}
	else
	{
		
		return false;
	
	}
}

int main() {
	int intArray[] = { 2, 1, 8, 23 ,889 };
	int numOfElements = (sizeof(intArray) / sizeof(intArray[0]));
	cout << is_sorted(intArray, numOfElements ) << endl;

}