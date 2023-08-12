/*
    2. getter and setter use :
*/
#include<iostream>
using namespace std;
class task_age
{
    private:
        int age;
    public:
        void setdata(int a);
        int getdata();
};

void task_age :: setdata(int a)
{
    age =a;
} 
int task_age :: getdata()
{
    return age;
}

int main()
{
    task_age done;
    done.setdata(21);
    cout << "Age is : " << done.getdata();
}