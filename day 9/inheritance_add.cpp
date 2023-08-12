/*
    4. Inheritance : addittion perform in derived class and get value form base class then create obj of derived class :
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
            cout << "Enter Value of a : ";
            cin >> a;
            cout << "Enter Value of b : ";
            cin >> b;
        }
};
class add_print_val : public get_val
{
    public:
        void add()
        {
            cout << "a + b : Sum is : " << a+b;
        }
};
int main()
{
    add_print_val done;
    done.getdata();
    done.add();
}