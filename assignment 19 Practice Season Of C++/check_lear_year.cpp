/*
    7. Wap program to check leap year using classes :
*/
#include <iostream>
using namespace std;

class leap_year
{
public:
    bool is_leap(int y)
    {
        if ((y % 4 == 0 && y % 100 != 0) || (y % 400 == 0))
        {
            return true;
        }
        return false;
    }
};

int main()
{
    int y;
    leap_year done;

    cout << "Enter any year for check leap year or not : ";
    cin >> y;

    if (done.is_leap(y))
    {
        cout << y <<" : is a leap year." << endl;
    }
    else
    {
        cout << y << " : is not a leap year." << endl;
    }

    return 0;
}