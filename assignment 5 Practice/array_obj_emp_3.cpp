/*
    1-wap to get 3 emp data using object-array :
*/

#include <iostream>
using namespace std;
class student
{
private:
    char name[50];
    int age, salary,id;

public:
    void getdata()
    {
        cout << "Enter Your Employee Id : ";
        cin >> id;
        cout << "Enter Your Employee Name : ";
        cin >> name;
        cout << "Enter Your Employee Age : ";
        cin >> age;
        cout << "Enter Your Employee Salary : ";
        cin >> salary;
    }
    void display()
    {
        cout << " Id is : " << id << endl;
        cout << " Name is : " << name << endl;
        cout << " Age is : " << age << endl;
        cout << " Salary is : " << salary << endl;
    }
};
int main()
{
    int i;
    student done[3];
    for (i = 1; i <= 3; i++)
    {
        cout << "Employee Number : " << i <<endl; 
        done[i].getdata();
    }
    for (i = 1; i <= 3; i++)
    {
        cout << "Employee Number : " << i <<endl; 
        done[i].display();
    }
}