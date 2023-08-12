/*
    3. wap to multiply of int as well as float value using function overloading :
*/
#include <iostream>
using namespace std;

class Multi
{
    public:
        int multi(int a, int b)
        {
            return a * b;
        }

        float multi(float a, float b)
        {
            return a * b;
        }
};

int main()
{
    Multi done;
    cout << "Multiplication of integers : " << done.multi(3, 10) << endl;
    cout << "Multiplication of floats : " << done.multi(10.6f, 2.5f) << endl;
    return 0;
}