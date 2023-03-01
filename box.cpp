/*
Author: Frida Mesa
Course: CSCI-135
Instructor: 
Assignment: Lab4A
Wrote a program that asks the user to input width and height and 
prints a solid rectangular box of the requested size using asterisks.
*/

#include <iostream>
using namespace std;

int main()
{

int width;
int height;

cout << "Input width : " << endl;
cin >> width;
cout << "Input height : " << endl;
cin >> height;

cout << "Shape : " << endl;

for(int i = 0; i < height; i++){ 

for(int j = 0; j < width; j++){ 
cout << "*";

}

cout << endl;
}

return 0;

}
