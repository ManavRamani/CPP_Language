/*
    2-Write a program to calculate the cube of a number using class abstraction :
*/
#include <iostream>
using namespace std;

class cube_cal
{
    private:
        double number;

    public:
        cube_cal(double num) : number(num) {}

        double cal_cube()
        {
            return number * number * number;
        }

};

int main()
{
    double num, ans;
    
    cout << "Enter a number: ";
    cin >> num;
    cube_cal cube(num);
    ans = cube.cal_cube();

    cout << "Cube of " << num << " is : " << ans << endl;

    return 0;
}
