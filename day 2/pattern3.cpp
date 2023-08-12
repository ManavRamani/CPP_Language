/*
	wap to perform pattern of trinagle : 
*/

#include<iostream>
using namespace std;

int main()
{
	int i,j,k;
	for(i=0;i<=5;i++)
	{
		for(j=0;j<=i;j++)
		{
			cout << "  ";
		}
		for(k=i;k<=5;k++)
		{
			cout << "* ";
		}
		cout << endl;
	}
}


