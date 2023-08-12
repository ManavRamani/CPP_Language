/*
    1. add two values using multiple inheritance :

      base class1     base class2
           ^             ^
           |             |
            \           /
             \         /
              \       /
               \     /
           Derived class1
*/
#include<iostream>
using namespace std;
class a
{
    protected:
        int a;
    public:
        void getdata()
        {
            cout << "Enter Value of a : ";
            cin >> a;
        }
};
class b 
{
    protected:
        int b;
    public:
        void getdata1()
        {
            cout << "Enter Value of b : ";
            cin >> b;
        }
};
class c : public a , public b
{
    public:
        void show()
        {
            cout << "Sum is : " << a+b;
        }
};
int main()
{
    c done;
    done.getdata();
    done.getdata1();
    done.show();
}