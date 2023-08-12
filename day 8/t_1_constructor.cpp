/*
    1. Constructor : type 1 -> default Constructor :
*/
#include<iostream>
using namespace std;

class add
{
    private:
        int a,b;
    public:
        add()
        {
            cout << "Enter Value of a : ";
            cin >> a;
            cout << "Enter Value of b : ";
            cin >> b;
        }
        void sum()
        {
            cout << "a + b : Ans is : " << a+b;
        }
};
int main()
{
    add done;
    done.sum();
}