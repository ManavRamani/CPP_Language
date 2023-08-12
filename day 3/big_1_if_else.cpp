/* day 3 : Ex : get two values form user and use class member function and perform to find big value using if-else :  */
#include<iostream>
using namespace std;

class big_1
{
	private:
		int a,b;
	
	public:
		void get_2()
		{
			cout << "Enter Value Of a : ";
			cin >> a;
			cout << "Enter Value Of b : ";
			cin >> b;
		}
		void big()
		{
			get_2();
			if(a > b)
			{
				cout << "a is Big : " << a << endl;
			}
			else
			{
				cout << "b is Big : " << b << endl;
			}
		}
};

int main()
{
	big_1 done;
	done.big();
}
