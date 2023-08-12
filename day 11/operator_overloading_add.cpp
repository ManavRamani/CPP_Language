/*
    1. Operator Overloading in perform add..
*/

#include <iostream>
using namespace std;
class base
{
    double a, b;

public:
    void set_val(int x, int y)
    {
        a = x;
        b = y;
    }
    void set_val(float x, float y)
    {
        a = x;
        b = y;
    }
    void set_val(double x, double y)
    {
        a = x;
        b = y;
    }
    void set_val(char x, char y)
    {
        a = x;
        b = y;
    }
    void add()
    {
        cout << "Sum is : " << a + b << endl << endl;
    }
};
int main()
{

    base done;
    cout << "1st int Done...." << endl;
    done.set_val(10, 20);
    done.add();

    cout << "2nd float Done...." << endl;
    done.set_val(10.4f, 10.5f);
    done.add();

    cout << "3rd double Done...." << endl;
    done.set_val(10.05, 10.5);
    done.add();

    cout << "4th char Done...." << endl;
    done.set_val('a', 'b');
    done.add();
}