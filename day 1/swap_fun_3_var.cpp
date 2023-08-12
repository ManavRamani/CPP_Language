/*
	3. write a program to perform swap two value using 3rd varible also use function : 
*/

#include<iostream>
using namespace std;

int swap();

int main()
{
	swap();
	return 0;
}

int swap()
{
	int a,b,c;
	cout << "Swap two value program ...." <<endl;
	cout << "Enter value of a : ";
	cin >> a;
	cout << "Enter value of b : ";
	cin >> b;
	
	cout << "Before  swap : "<< endl;
	cout << " Value of a : "<< a << endl;
	cout << " Value of b : "<< b << endl;
	
	c=a;
	a=b;
	b=c;
	
	cout << "After  swap : " << endl;
	cout << " Value of a : "<< a << endl;
	cout << " Value of b : "<< b << endl;
	
	return 0;
}
