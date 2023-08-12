/*
	day 3 : Ex : Get 4 Values form User and Find Small Values using Ternary opr... :	
*/

#include<iostream>
using namespace std;

class ternary_1
{
	private:
		int a,b,c,d;
		
	public:
		void get_4()
		{
			cout << "Enter Value of a : ";
			cin >> a;
			cout << "Enter value of b : ";
			cin >> b;
			cout << "Enter value of c : ";
			cin >> c;
			cout << "Enter Value of d : ";
			cin >> d;
		}
		void ternary()
		{
			get_4();
			
			cout << "Find Small Value......." << endl << endl;
			
			((a < b) && (a < c) && (a < d)) ? cout << "a is Small : " << a << endl : ((b < c) && (b < d)) ? cout << "b is Small : " << b << endl : c < d ? cout << "c is Small : " << c << endl : cout << "d is Small : " << d << endl; 
			
		}
		
};

int main()
{
	ternary_1 done;
	done.ternary();
	
}
