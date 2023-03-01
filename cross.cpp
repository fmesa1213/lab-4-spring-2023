/*
Author: Frida Mesa
Course: CSCI-135
Instructor: 
Assignment: Lab4C
Wrote a program that asks the user to input the shape size, 
and prints a diagonal cross of that dimension.
*/

#include <iostream>
using namespace std;

int main()
{
int n;
	
cout << "Input size: " << endl;
cin >> n;
	
for(int i = 1;i < = n; i++){
for(int j = 1;j <= n; j++){
	if(i==j || (i+j-1==n))
		{
		cout<<"*";
		}
else{
	cout<<" ";
	}
}
cout<<endl;
}
return 0;
}
