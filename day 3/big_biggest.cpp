/*
	day 3 : Ex : Find Big Value :  using : simple if - else , Ternary Oprater & also using Nestted else-if :
*/

#include<iostream>
using namespace std;

class big
{
	private:
		int a;
		int b;
		int c;
		int d;
		
	public:
		void two()
		{
			cout << "Enter 2 Value For Find Big Value." << endl;
			cout << "Enter a Value : ";
			cin >> a;
			cout << "Enter b Value : ";
			cin >> b;
		}
		void three()
		{
			cout << "Enter 3 Value For Find Big Value." << endl;
			cout << "Enter 1st Value : ";
			cin >> a;
			cout << "Enter 2nd Value : ";
			cin >> b;
			cout << "Enter 3rd Value : ";
			cin >> c;
			
		}
		void four()
		{
			cout << "Enter 4 Value For Find Big Value." << endl;
			cout << "Enter Value a : ";
			cin >> a;
			cout << "Enter Value b : ";
			cin >> b;
			cout << "Enter Value c : ";
			cin >> c;
			cout << "Enter Value d : ";
			cin >> d;
		}
		
		void checkIf()
		{
			two();
			if(a>b)
			{
				cout << "a is Big : " << a << endl << endl;
			}
			else{
				cout << "b is Big : " << b << endl << endl;
			}
			
		}
		
		void checkTer()
		{
			three();
			(a > b && a > c) ? cout << "a is Big : " << a << endl : b > c ? cout << "b is Big : " << b << endl : cout << "c is Big : " << c << endl;
		
		}
		
		void checkNest()
		{
			four();
			if(a > b)
			{
				if(a > c)
				{
					if(a > d)
					{
						cout << "a is Big : " << a << endl;
					}
					else
					{
						cout << "d is Big : " << d << endl;
					}
				}
				else if(c > d)
				{
					cout << "c is Big : " << c << endl;
				}
				else 
				{
					cout << "d is Big : " << d << endl;
				}
			}
			else if(b > c)
			{
				if(b > d)
				{
					cout << "b is Big : " << b << endl;
				}
				else
				{
					cout << "d is Big : " << d << endl;
				}
			}
			else if(c > d)
			{
				cout << "c is Big : " << c << endl;
			}
			else
			{
				cout << "d is Big : " << d << endl;
			}
			
		}
};

int main()
{
	big done;
	done.checkIf();
	done.checkTer();
	done.checkNest();
}
