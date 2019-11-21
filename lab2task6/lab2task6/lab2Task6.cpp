#include <iostream>
#include <vector>
#include <string>
using namespace std;
vector<string> namedb = {};
void initialiseDatabase(){
	string a;
	cout << "This is going to delete every name from the Database are you sure?" << endl;
	cin >> a;
	if (a == "Yes" || a == "yes" )
	{
		namedb.clear();
	}

}

void insert() {
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

void search() {
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

void deleteFrom() {
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
void print(){
	for (int i = 0; i < namedb.size(); i++)
	{
		cout << namedb[i] << " ";
	}
	cout << endl << endl;
}
int main() {
	int menuNumber;
	bool menu = true;
	do
	{
		cout << "1. initialise database" << endl << "2. insert" << endl << "3. search " << endl << "4. delete" << endl << "5. print" << endl << "6. quit" << endl; 
		cin >> menuNumber;
		if (menuNumber == 1){
			initialiseDatabase();
		}
		if (menuNumber == 2) {
			insert();
		}
		if (menuNumber == 3) {
			search();
		}
		if (menuNumber == 4) {
			deleteFrom();
		}
		if (menuNumber == 5) {
			print();
		}
		if (menuNumber == 6) {
			menu = false;
		}
			
	} while (menu  == true);
}