/*
Author: Frida Mesa
Course: CSCI-135
Instructor: 
Assignment: Lab4E
Wrote a program that prints the top-right half of a square, given the side length.
*/

#include <iostream>
using namespace std;

int main()
{
   int length;
   int c;
   int j;
   

        cout << "Input side length: ";
        cin >> length;
        
cout << "Shape: " << endl;
        for(c = 0; c < length; c++) {
                for(j=0; j < c; j++) {
                        cout << " ";
                }
                for(j=0; j<(length - c); j++) {
                        cout << "*";
                }
                cout << endl;
          return 0;
  
}
