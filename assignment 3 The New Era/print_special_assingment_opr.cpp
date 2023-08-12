/*
    3. WAP to print value of variable using special assignment operator :-
*/

#include<iostream>
using namespace std;

int main()
{
    int a=13;
    cout << "Value of a is : " << a << endl;
    int b=a=10;     // special Assignment Operator
    cout << "After use of special assignment operator : " << endl << "value of a is : " << a << endl;
    cout << "Value of b is : " << b;
    return 0;
}