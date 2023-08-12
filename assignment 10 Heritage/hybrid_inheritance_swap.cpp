/*
    4. wap to swap two values using hybrid inheritance :
*/
#include <iostream>
using namespace std;

class swap
{
    protected:
        int temp;

    public:
        void swapValues(int &a, int &b)
        {
            temp = a;
            a = b;
            b = temp;
        }
};

class b1 : public swap
{
    public:
        void f_swap(int &a, int &b)
        {
            swapValues(a, b);
        }
};

class c1 : public swap
{
    public:
        void re_swap(int &a, int &b)
        {
            swapValues(a, b);
        }
};

class cb1 : public b1, public c1{};

int main()
{
    cb1 done;

    int x, y;
    cout << "Enter Value of a : ";
    cin >> x;
    cout << "Enter Value of b : ";
    cin >> y;

    cout << "Before swap : " << endl;
    cout << "x = " << x << endl;
    cout << "y = " << y << endl;

    done.f_swap(x, y);
    cout << "After swap : " << endl;
    cout<< "x = " << x << endl;
    cout<< "y = " << y << endl;

    done.re_swap(x, y);
    cout << "Re swap : " << endl;
    cout << "x = " << x << endl;
    cout << "y = " << y << endl;

    return 0;
}
