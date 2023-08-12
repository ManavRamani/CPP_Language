/*
	2-WAP TO PERFORM ADDITION OF TWO NUMBERS USING CLASS, WITH TWO FUNCTIONS
		FIRST FUNCTION- GET VALUES FROM USER SECOND- PERFORM ADDITION
*/

#include<iostream>
using namespace std;

class add
{
	private:
		int a,b;
	public:
		void get_val()
		{
			cout << "Enter Value of a : ";
			cin >> a;
			cout << "Enter Value of b : ";
			cin >> b;
		}
		void sum()
		{
			cout << "Addition is : " << a+b;
		}
};

int main()
{
	add done;
	done.get_val();
	done.sum();
	
	return 0;
}

