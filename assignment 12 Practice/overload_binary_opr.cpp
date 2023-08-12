/*
    2. Write a program to demonstrate operator overloading using 
        binary method with class method and friend function method
*/

#include<iostream>
using namespace std;
class task
{
        int a,b;
    public:
        task(int m,int n)
        {
            a=m;
            b=n;
        }
        void show()
        {
            cout << "a is : " << a <<endl;
            cout << "b is : " << b <<endl;
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
    task done(10,20);

    done.show();
    +done;
    done.show();
    
    return 0;
}