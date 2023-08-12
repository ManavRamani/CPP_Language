/*
    1. write a program to perform unary using friend function :
*/
#include <iostream>
using namespace std;
class task
{
    int a, b;

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
        cout << "a is : " << a << endl;
        cout << "b is : " << b << endl;
    }
    friend void operator +(task &done);
};
void operator +(task &done)
{
    done.a=-done.a;
    done.b=-done.b;
}
int main()
{
    task done;

    done.get_val();
    done.show();
    
    +done;
    
    done.show();

    return 0;
}