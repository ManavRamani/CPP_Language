/*
    1. Write a program to perform Find big value using friend function :-
*/
#include<iostream>
using namespace std;
class task
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
        friend void big_val(task done);
};
void big_val(task done)
{
    if(done.a > done.b)
        cout << "a is Big : " << done.a << endl;
    else
        cout << "b is Big : " << done.b << endl;
}
int main()
{
    task done;
    done.get_val();
    big_val(done);
    return 0;
}