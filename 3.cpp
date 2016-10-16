#include <iostream>

using namespace std;

int main()
{
	int month;
	cout << "Enter month in numerals : ";
	cin >> month;
	
	int day;
	cout << "Enter day in numerals : ";
	cin >> day;
	
	int year;
	cout << "Enter year in TWO numerals : ";
	cin>> year;
	
	if(month*day == year)
	cout << "Magic Date";
	
	else
	cout << "Non-magic date";
	
}
