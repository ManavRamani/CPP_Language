/*
    2. Write a program to demonstrate method overriding :
        - Method Overriding print Message : 
*/

#include<iostream>
using namespace std;
class a
{
    public:
        void show()
        {
            cout << "This is Class A" << endl;
        }
};
class b : public a
{
    public:
        void show()
        {
            cout << "This is Class B" << endl;
        }
};
int main()
{
    b done;
    done.show();
    done.a::show();
}