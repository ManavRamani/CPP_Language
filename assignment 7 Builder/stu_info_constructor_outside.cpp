/*
    2. defining the constructor outside the class and print student details like 
    name, roll_no, course_name, fees :
*/
#include <iostream>
#include <string>
using namespace std;

class std_info 
{
        int roll_no, fees;
        string name, course_name;
    public:
        std_info( int roll_no,string name, string course_name, int fees);
        void show();

};
std_info::std_info(int rn, string n, string course, int fees_amount)
{
        roll_no = rn;
        name = n;
        course_name = course;
        fees = fees_amount;
}
void std_info::show() 
{
    cout << "Name: " << name << endl;
    cout << "Roll No: " << roll_no << endl;
    cout << "Course Name: " << course_name << endl;
    cout << "Fees: " << fees << endl;
}

int main() 
{
    std_info done(36, "Manav Ramani", "Flutter Course", 85000);
    done.show();
    return 0;
}