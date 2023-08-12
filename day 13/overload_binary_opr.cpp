/*
    2. Write a program to perform Overload Binary operator :-
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
        task operator +(task t)
        {
            task done(0,0);
            done.a=a+t.a;
            done.b=b+t.b;
            return done;
        }
};
int main()
{
    task done(0,0),done1(20,10),done2(30,35);

    cout << "obj 1 : " << endl;
    done1.show();
    cout << "obj 2 : " << endl;
    done2.show();
    done=done1+done2;
    cout << "obj 3 : " << endl;
    done.show();

    return 0;
}