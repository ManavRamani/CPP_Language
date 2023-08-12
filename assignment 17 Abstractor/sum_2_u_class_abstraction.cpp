/*
    1. WAP TO SUM OF TWO NUMBER GETTING FROM USER USING CLASS ABSTRACTION :
*/
#include <iostream>
using namespace std;

class Sum
{
private:
    double n1, n2;

public:
    Sum(double n1, double n2) : n1(n1), n2(n2) {}

    double cal_sum()
    {
        return n1 + n2;
    }
};

int main()
{
    double n1, n2;

    cout << "Enter 1st number : ";
    cin >> n1;

    cout << "Enter 2nd number : ";
    cin >> n2;

    Sum done(n1, n2);
    double sum = done.cal_sum();

    cout << "Sum of " << n1 << " and " << n2 << " is : " << sum << endl;

    return 0;
}