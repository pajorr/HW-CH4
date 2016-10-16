#include <iostream>
#include <cmath>

using namespace std;

int main()
{

float weight;
cout << "Enter your weight in pounds : ";
cin >> weight;

float height;
cout << "Enter your height in inches : ";
cin >> weight;

float bmi = weight * 703.0 / (height*height);

if(bmi <18.5)
cout << "Underweight.";
else if(bmi>25.0)
cout << "Overweight.";
else
cout << "You're fit!";

}
