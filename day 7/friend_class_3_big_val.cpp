/*
    2. write a program to perform get 3 value and find big value using ternery opr :-
*/
#include <iostream>
using namespace std;
class task
{
    int a, b, c;

public:
    void get_val()
    {
        cout << "Value of a : ";
        cin >> a;
        cout << "Value of b : ";
        cin >> b;
        cout << "Value of c : ";
        cin >> c;
    }
    friend class big;
};
class big
{
public:
    void big_val(task done)
    {
        ((done.a > done.b) && (done.a > done.c)) ? cout << "a is Big : " << done.a : (done.b > done.c) ? cout << "b is Big : " << done.b
                                                                                                       : cout << "c is Big : " << done.c;
    }
};
int main()
{
    task done;
    done.get_val();
    big b;
    b.big_val(done);
    return 0;
}