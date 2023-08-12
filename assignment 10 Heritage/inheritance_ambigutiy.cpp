#include <iostream>
using namespace std;

class BaseA
{
    public:
        void display()
        {
            cout << "Base Class A display()" << endl;
        }
};

class BaseB
{
    public:
        void display()
        {
            cout << "Base Class B display()" << endl;
        }
};

class Derived : public BaseA, public BaseB
{
};

int main()
{
    Derived done;

    done.BaseA::display();
    done.BaseB::display();

    return 0;
}
