/*
    1. write a program to demonstrate multiple inheritance : 
        -> add.. perform....
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