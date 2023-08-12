/*
    5. multilevel Inheritance : 
        create class a, b and c ..
*/

#include<iostream>
using namespace std;
class a
{
    public:
        void show1()
        {
            cout << "this is a class..." << endl;
        }
};
class b : public a
{
    public:
        void show2()
        {
            cout << "this is b class..." << endl;
        }
};
class c : public b
{
    public:
        void show3()
        {
            cout << "this is c class..." << endl;
        }
};

int main()
{
    c done;
    done.show3();
    done.show2();
    done.show1();
}