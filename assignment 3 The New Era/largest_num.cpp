/*
	1-WAP TO FIND LARGEST NUMBER USING SIMPLE CLASS EXAMPLE :
*/

#include<iostream>
using namespace std;
class largest
{
	private:
		int a,b,c,d;
	public:
		void input()
		{
			cout << "Enter value of a : ";
			cin >> a;
			cout << "Enter value of b : ";
			cin >> b;
			cout << "Enter value of c : ";
			cin >> c;
		}
		void larg_val()
		{
			input();
			d = ((a > b) && (a > c) ? a : (b > c) ? b : c);
			cout << "Largest Number is : " << d;
		}
		
};

int main()
{
	largest done;	
	done.larg_val();
}
