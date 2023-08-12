/*
    5. Wap program to swap two numbers using class and object :
*/
#include <iostream>
using namespace std;

class Swap
{
    public:
        void swap_n(int &n1, int &n2)
        {
            int temp = n1;
            n1 = n2;
            n2 = temp;
        }
};

int main()
{
    int n1, n2;

    cout << "Enter n1 number: ";
    cin >> n1;

    cout << "Enter n2 number: ";
    cin >> n2;

    Swap done;
    done.swap_n(n1, n2);

    cout << "After swapping, n1 number is: " << n1 << endl;
    cout << "After swapping, n2 number is: " << n2 << endl;

    return 0;
}