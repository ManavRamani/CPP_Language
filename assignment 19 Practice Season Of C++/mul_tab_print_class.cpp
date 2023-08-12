/*
    8. Wap program to print Multiplication table of a number using classes :
*/
#include <iostream>
using namespace std;

class mul_tab_p
{
    public:
        void p_mul_tab(int n)
        {
            cout << "Multiplication table of : " << n << ":" << endl;
            for (int i = 1; i <= 10; ++i)
            {
                cout << n << " x " << i << " = " << (n * i) << endl;
            }
        }
};

int main()
{
    int n1;
    mul_tab_p done;

    cout << "Enter any number : ";
    cin >> n1;
    done.p_mul_tab(n1);

    return 0;
}