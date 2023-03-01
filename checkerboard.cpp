/*
Author: Frida Mesa
Course: CSCI-135
Instructor: 
Assignment: Lab4B
Wrote a program that asks the user to input width and height and 
prints a rectangular checkerboard of the requested size using asterisks and spaces (alternating).
*/

#include <iostream>
using namespace std;

int main()  
{

int width;
int height;

cout << "Input width: ";
cin >> width;
cout << "Input height: ";
cin >> height;

for(int r = 0; r < height; r++) {
for(int c = 0; c < width; c++) {
	if ((r+c) % 2 == 0)
{
	cout << "*";
} 
else {
	cout << " ";
	}
}
cout << endl;
}

return 0;
}
