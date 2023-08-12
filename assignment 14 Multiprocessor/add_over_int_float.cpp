/*
    1. Wap to perform addition of int value as well as float value using function overloading :
*/
#include <iostream>
using namespace std;

class Sum
{
    public:
        int add(int a, int b)
        {
            return a + b;
        }

        float add(float a, float b)
        {
            return a + b;
        }
};

int main()
{
    Sum done;
    cout << "Sum of integers: " << done.add(10, 20) << endl;
    cout << "Sum of floats: " << done.add(20.5f, 12.7f) << endl;
    return 0;
}