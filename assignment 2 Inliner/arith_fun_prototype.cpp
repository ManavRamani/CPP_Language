/*
	2-WAP TO PERFORM ALL ARITHMATIC TASK USING FUNCTION PROTOTYPE :
*/
#include<iostream>
using namespace std;

int add(int x,int y); // function prototype...
int sub(int x,int y);
int mul(int x,int y);
float div(int x,int y);

int main()
{
	int a,b;
	cout << "Enter Value of a : ";
	cin >>a;
	cout << "Enter Value of b : ";
	cin >>b;
	
	cout << "Sum is : " << add(a,b) << endl;
	cout << "Substract is : " << sub(a,b) << endl;
	cout << "Multiply is : " << mul(a,b) << endl;
	cout << "Divide is : " << div(a,b) << endl;
		
	return 0;
}

int add(int x,int y)
{
	return x+y;
}
int sub(int x,int y)
{
	return x-y;
}
int mul(int x,int y)
{
	return x*y;
}
float div(int x,int y)
{
	if(y==0)
	{
		return 0;
	}
	else
	{
		return(float) x/y;		
	}

}
