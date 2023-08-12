/*
    1. defining the constructor within the class and print student details like
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
        std_info(int rn, string n, string course, int fees_amount)
        {
            roll_no = rn;
            name = n;
            course_name = course;
            fees = fees_amount;
        }
        void show()
        {
            cout << "Roll No : " << roll_no << endl;
            cout << "Name : " << name << endl;
            cout << "Course : " << course_name << endl;
            cout << "Fees : " << fees << endl;
        }
};

int main()
{
    std_info done(36, "Manav Ramani", "Flutter Course", 85000);
    done.show();
    return 0;
}
