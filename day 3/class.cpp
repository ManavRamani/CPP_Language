/*
	day 3 : Arithmatic opration using class and functions :
*/
#include<iostream>
using namespace std;
class arith
{
	private:
		int a;
		int b;
		
	public:
		void get()
		{
			cout << "Enter First Value : ";
			cin >> a;
			cout << "Enter Second Value : ";
			cin >> b;
		}
		void add()
		{
			cout << "Enter Values For Sum." << endl;
			get();
			cout << "Sum. is : " << a+b << endl << endl;
		}
		void sub()
		{
			cout << "Enter Values For Sub." << endl;
			get();
			cout << "Sub. is : " << a-b << endl << endl;
		}
		void mul()
		{
			cout << "Enter Values For Mul." << endl;
			get();
			cout << "Mul. is : " << a*b << endl << endl;			
		}
		void div()
		{
			cout << "Enter Values For Div." << endl;
			get();
			cout << "Div. is : " << a/b << endl;			
		}


};

int main()
{
	arith done;
	done.add();
	done.sub();
	done.mul();
	done.div();
	
}
