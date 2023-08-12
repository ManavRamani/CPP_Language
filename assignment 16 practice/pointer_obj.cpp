/*
    2. Write  a program to demonstrate the use of pointer object.
*/
#include <iostream>
using namespace std;

class pow_cal
{
        double ans;
    public:
        virtual double cal_pow(double b, int e)
        {
            ans = 1.0;
            for (int i = 0; i < e; ++i)
            {
                ans *= b;
            }
            return ans;
        }
};

int main()
{
    double b, ans;
    int e;

    cout << "Enter value of b : ";
    cin >> b;

    cout << "Enter value of e : ";
    cin >> e;

    pow_cal done;

    pow_cal *powerPtr = &done;

    ans = powerPtr->cal_pow(b, e);
    cout << "ans: " << ans << endl;

    return 0;
}