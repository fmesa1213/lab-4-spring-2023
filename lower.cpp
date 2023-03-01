/*
Author: Frida Mesa
Course: CSCI-135
Instructor: 
Assignment: Lab4D
Wrote a program that prints the bottom-left half of a square, given the side length.
*/

#include <iostream>
using namespace std;

int main()
{

int length;
cout << “Input side length: " << endl;
cin >> length;
  
cout << "Shape: " << endl;
for(int i =1; i <= length; i++){
for(int j = 1; j <= i; j++){
cout << "*";
}
cout<<endl;
}
return 0;
  
}
