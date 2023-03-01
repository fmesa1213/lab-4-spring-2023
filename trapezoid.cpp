/*
Author: Frida Mesa
Course: CSCI-135
Instructor: 
Assignment: Lab4F
Wrote a program that prints an upside-down trapezoid of given width and height.
*/

#include <iostream>
using namespace std;

int main()
{

int width;
int height;
int i;
int j;

cout<<"Enter width : " << endl;
cin>>width;
cout<<"Enter height : " << endl;
cin>>height;


if ( 2*height > width+1)
{
cout<<"Impossible Shape!";
}

else
{
for(i = 0; i < height; i++)
{
for(j = 0; j < i; j++)
cout<<" ";
for(j = 0; j < width; j++)
{
cout << "*";
}
width -= 2;
cout << endl;
}
}

return 0;

}
