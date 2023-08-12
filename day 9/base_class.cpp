/*
    1. Inheritance : create base class , derived class and create obj of derived class and use parent properties :
*/
#include <iostream>
using namespace std;
class a
{
    public:
    void show()
    {
        cout << "This is base class : \'parent\'..." << endl;
    }
};
class b : public a
{
    public:
    void show1()
    {
        cout << "This is derived class : \'child\'..." << endl;
    }
};

int main()
{
    b done;
    done.show1();
    done.show();
}