/*
	3-WAP TO PRINT VALUE OF VARIABLE USING REFERENCE VARIABLE :
*/

#include<iostream>
using namespace std;

int main()
{
	int num;
	int& ref = num;
	cout << "Enter Number : ";
	cin >>num;
	cout << "Value of num : " << num << endl;
	cout << "VAlue of ref : " << ref << endl;
	
	return 0;
}
