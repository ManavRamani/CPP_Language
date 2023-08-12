/*
    1. outside of class use data member : 
*/
#include<iostream>
using namespace std;

class sum
{
    private:
        int a,b;
    public:
        void getdata();
        void add();
};
void sum :: getdata()
{
    cout << "Enter Value of a : ";
    cin >> a;
    cout << "Enter Value of b : ";
    cin >> b;
}
void sum :: add()
{
    cout << "Sum is : " << a+b << endl;
}
int main()
{
    sum done;
    done.getdata();
    done.add();
}