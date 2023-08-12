/*
    1. Wap to demonstrate operator overloading using unary method 
        with class method and friend function method :
*/
#include<iostream>
using namespace std;

class Task 
{
    private:
        int value;

    public:
        Task(int val) : value(val) {}

        Task operator-() 
        {
            return Task(-value);
        }

        void display() 
        {
            cout << "Value: " << value << endl;
        }

    friend Task operator-(const Task& num);
};
Task operator-(const Task& num) 
{
    return Task(-num.value);
}
int main() 
{
    Task num1(10);
    Task n1 = -num1;
    num1.display();
    n1.display();    
    return 0;
}