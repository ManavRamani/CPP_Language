/*
    1. Write a program to demonstrate the use of virtual function :
*/
#include <iostream>
#define pi 3.14
using namespace std;

class shape
{
    public:
        virtual void show()
        {
            cout << "shape area : " << endl;
        }
};

class circle : public shape
{
    private:
        double r,area;

    public:
        circle(double r) : r(r) {}

        void show() override
        {
            area = pi * r * r;
            cout << "circle area is : " << area << endl;
        }
};

class rectangle : public shape
{
    private:
        double w,h,area;

    public:
        rectangle(double w, double h) : w(w), h(h) {}

        void show() override
        {
            area = w * h;
            cout << "rectangle area is : " << area << endl;
        }
};

int main()
{
    shape *s1 = new circle(3.6);
    shape *s2 = new rectangle(5.2, 3.5);
    
    s1->show();
    s2->show();
    delete s1;
    delete s2;

    return 0;
}
