/*
    1. wap program to demonstrate inheritance :
*/
#include<iostream>
using namespace std;
class get_val
{
    protected:
        int a,b;
    public:
        void getdata()
        {
            cout << "Enter value of a : ";
            cin >> a;
            cout << "Enter value of b : ";
            cin >> b;
        }
};
class add_val : public get_val
{
    public:
        void add()
        {
            cout << "a + b : Sum is : " << a+b << endl;
        }
};
class sub_val : public get_val
{
    public:
        void sub()
        {
            cout << "a - b : Sub is : " << a-b << endl;
        }
};
int main()
{
    add_val done1;
    sub_val done2;
    done1.getdata();
    done1.add();
    done2.getdata();
    done2.sub();
}