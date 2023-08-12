/*
    1. Write a program to calculate the power of a number using header file abstraction :
*/
#include <iostream>
#include <cmath>
using namespace std;

int main() 
{
    double val, varg,ans;

    cout << "Enter the val : ";
    cin >> val;
    cout << "Enter the varg : ";
    cin >> varg;

    ans = pow(val, varg);
    cout << "ans : " << ans << endl;

    return 0;
}