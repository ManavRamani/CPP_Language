/*
    1. write a program to demonstrate operator overloading using 
        unary method with class method and friend function method :
*/
#include<iostream>
using namespace std;
class a1
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
        friend void operator +(a1 &done);
};
void operator +(a1 &done)
{
    done.a=-done.a;
    done.b=-done.b;
}
int main()
{
    a1 done;
    done.get_val();
    done.show();
    +done;
    done.show();    
    return 0;
}