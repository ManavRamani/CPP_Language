/*
    2. wap to demonstrate hybrid inheritance :
*/
#include <iostream>
using namespace std;
class a1
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
class b1 : public a1
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
class c1 : public a1
{
    protected:
        int c;

    public:
        void getdata2()
        {
            cout << "Enter Value of c : ";
            cin >> c;
        }
};
class b2 : public b1, public c1
{
    public:
        void show()
        {
            cout << "Sum is : " << b1::a + b + c;
        }
};
int main()
{
    b2 done;
    done.b1::getdata();
    done.getdata1();
    done.getdata2();
    done.show();
}