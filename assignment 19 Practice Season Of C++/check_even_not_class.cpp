/*
    6. Wap program to check weather a number is Odd or Even using class :
*/
#include <iostream>
using namespace std;

class check
{
public:
    bool Even(int n1)
    {
        return n1 % 2 == 0;
    }
};

int main()
{
    int n;
    check done;

    cout << "Enter a number: ";
    cin >> n;

    if (done.Even(n))
    {
        cout << n << " : is an even number" << endl;
    }
    else
    {
        cout << n << " : is an odd number" << endl;
    }

    return 0;
}