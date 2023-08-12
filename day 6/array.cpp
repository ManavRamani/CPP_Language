/*
    1. Array :
*/
#include<iostream>
using namespace std;
class student
{
    private:
        char name[50];
        int age;
    public:
        void getdata()
        {
            cout << "Enter Your Name : ";
            cin >> name;
            cout << "Enter Your Age : ";
            cin >> age;
        }
        void display()
        {
            cout << " Name is : " << name << endl;
            cout << " Age is : " << age << endl;
        }
};
int main()
{
    student done;
    done.getdata();
    done.display();
}