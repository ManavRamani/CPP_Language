/*
    1. Private Function Access : 
*/
#include<iostream>
using namespace std;

class demo
{
    private:
        void getdata();
    public:
        void setdata();
};


void demo::getdata()
{
    cout << "this is Private..." << endl;
}

void demo::setdata()
{
    cout << "this is Public..." << endl;
    getdata();
}

int main()
{
    demo done;
    done.setdata();
}
