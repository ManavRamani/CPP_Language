/*
	2. write a program to perform arithmatic opration using function :
*/

#include<iostream>
using namespace std;

int add();
int sub();
int mul();
int div();

int main()
{
	add();	
	sub();
	mul();
	div();
	return 0;
}

int add()
{
	int a,b,c;
	cout << "Sum of Two Values : "<< endl;
	cout << "Enter Value of a : ";
	cin >> a;
	cout << "Enter Value of b : ";
	cin >> b;
	c=a+b;
	cout << "a + b : Ans is = "<< c << "\n---------------------------------------\n";
	return 0;
}

int sub()
{
	int a,b,c;
	cout << "Sub of Two Values : "<< endl;
	cout << "Enter Value Of a : ";
	cin >> a;
	cout << "Enter Value Of b : ";
	cin >> b;
	c=a-b;
	cout << "a - b : Ans is = " <<c << "\n---------------------------------------\n";
	return 0;
}

int mul()
{
	int a,b,c;
	cout << "Multi of Two Values : "<< endl;
	cout << "Enter Value of a : ";
	cin >> a;
	cout << "Enter Value of b : ";
	cin >> b;
	c=a*b;
	cout << "a * b : Ans is = "<<c << "\n---------------------------------------\n";	
	return 0;
}

int div()
{
	int a,b,c;
	cout << "Divide of Two Values : "<< endl;
	cout << "Enter Value of a :";
	cin >> a;
	cout << "Enter Value of b : ";
	cin >> b;
	c=a/b;
	cout << "a / b : ANs is = " << c << "\n---------------------------------------\n";
	return 0;
}


