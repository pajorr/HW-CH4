#include <iostream>

using namespace std;

int main()
{
	int rectangleHeight;
	cout << "Enter Height of 1st rectangle : ";
	cin >> rectangleHeight;
	
	int rectangleWidth;
	cout << "Enter Width of 1st rectangle : ";
	cin >> rectangleWidth;
	
	int rectangleArea = rectangleHeight * rectangleWidth;
	
	
	int rectangleHeight2;
	cout << "Enter Height of 2nd rectangle : ";
	cin >> rectangleHeight2;
	
	int rectangleWidth2;
	cout << "Enter Width of 2nd rectangle : ";
	cin >> rectangleWidth2;
	
	int rectangleArea2 = rectangleHeight2 * rectangleWidth2;
	
	if(rectangleArea > rectangleArea2)
	cout << "1st rectangle is larger." << "\n";
	else
	cout << "2nd rectangle is larger." << "\n";
	if(rectangleArea == rectangleArea2)
	cout << "Both rectangle has the same area." << "\n";

	
}
