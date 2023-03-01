/*
Author: Frida Mesa
Course: CSCI-135
Instructor: 
Assignment: Lab4G
Wrote a program  that asks the user to input width and height and prints a checkerboard of 3-by-3 squares. 
*/

#include <iostream>
using namespace std;

int main()
{

int width;
int height;
int i;
int j;
  
cout<<"Input width: " << endl;
cin >> width;
cout<<"Input height: " << endl;
cin >> height;

bool space;
bool x;
bool y;
  
for(i = 0; i < height; i++)
{
if(i % 3 == 0)
{
if(i % 2 == 0)
x = true;
else
x = false;
}
for(j = 0; j < width; j++)
{
if(j % 3 == 0)
{
if(j % 2 == 0)
y = true;
else
y = false;
}

space = x^y;

if(space)
cout<<" ";
else
cout<<"*";
}
cout<<"\n";
}
  return 0;

}
