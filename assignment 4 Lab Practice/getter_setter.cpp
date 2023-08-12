/*
    1. WAP TO PERFROM GETTER AND SETTER :
*/

#include <iostream>
using namespace std;

class data_get_set
{
    private:
        int age;
    public:
        void setdata(int a);    
        int getdata();
};

void data_get_set::setdata(int a)
{
    age=a;
}

int data_get_set::getdata()
{
    return age;
}

int main()
{
    data_get_set d_g_s;
    d_g_s.setdata(20);
    cout << "Age is : " << d_g_s.getdata();
    return 0;
}