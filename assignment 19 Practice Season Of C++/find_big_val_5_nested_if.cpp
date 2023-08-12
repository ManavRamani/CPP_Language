/*
    1. Wap program to find Greatest among five numbers using Nested if else  Class :
*/
#include <iostream>
using namespace std;

class big
{
        int greatest;
    public:
        int big_val(int n1, int n2, int n3, int n4, int n5)
        {
            greatest = n1;

            if (n2 > greatest)
            {
                greatest = n2;
            }

            if (n3 > greatest)
            {
                greatest = n3;
            }

            if (n4 > greatest)
            {
                greatest = n4;
            }

            if (n5 > greatest)
            {
                greatest = n5;
            }

            return greatest;
        }
};

int main()
{
    int n1, n2, n3, n4, n5;

    cout << "Enter five numbers : ";
    cin >> n1 >> n2 >> n3 >> n4 >> n5;

    big done;
    int greatest = done.big_val(n1, n2, n3, n4, n5);

    cout << "Big value from five numbers in : " << greatest << endl;

    return 0;
}