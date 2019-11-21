#include <iostream>
using namespace std;

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

int main() {
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
	} while ( a != 0);
	
}