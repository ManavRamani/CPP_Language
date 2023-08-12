/*
    1. write a program to perform unary operator :-
*/
#include<iostream>
using namespace std;
class a
{
        int a,b;
    public:
        void get_val()
        {
            cout << "Enter Value of a : ";
            cin >> a;
            cout << "Enter Value of b : ";
            cin >> b;
        }
        void show()
        {
            cout << "a : " << a << endl;
            cout << "b : " << b << endl;
        }
        void operator +()
        {
            a=-a;
            b=-b;
        }
        void add()
        {
            cout << "Sum is : " << a+b << endl;
        }
};
int main()
{
    a done;
    done.get_val();
    done.show();

    +done;
    
    done.show();
    done.add();
    
    return 0;
}