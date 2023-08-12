/*
	1-WAP TO SWAP TWO NUMBER USING INLINE FUNCTION :
*/

#include<iostream>
using namespace std;
inline void swap(int &x,int &y)
{
	int c;
	c=x;
	x=y;
	y=c;	

}

int main()
{
	int a,b;

	cout << "Enter Value of a : ";
	cin >>a;
	cout << "Enter Value of b : ";
	cin >>b;

	cout << "Before Swap : " << endl;
	cout << "a is : " << a << endl; 
	cout << "b is : " << b << endl;

	swap(a,b);

	cout << "After Swap : " << endl;
	cout << "a is : " << a << endl; 
	cout << "b is : " << b << endl;
	
	return 0;
}
