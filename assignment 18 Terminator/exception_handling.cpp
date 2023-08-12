/*
    1. Write a program to demonstrate the use of exception handling :
*/
#include <iostream>
using namespace std;
int main()
{
    try
    {
        int n1, n2;
        float ans;
        cout << "enter value of n1 : ";
        cin >> n1;

        cout << "enter value of n2 : ";
        cin >> n2;

        if (n2 == 0)
        {
            throw runtime_error("Division by zero is not allowed.");
        }

        ans = n1 / n2;

        cout << "ans is : " << ans << endl;
    }
    catch (const exception &done)
    {
        cerr << "Exception : " << done.what() << endl;
    }
    return 0;
}
