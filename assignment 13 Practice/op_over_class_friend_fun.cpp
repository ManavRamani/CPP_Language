/*
    2. Wap to demonstrate operator overloading using binary method 
        with class method and friend function method :
*/
#include<iostream>
using namespace std;

class Task 
{
    private:
        double a, b;

    public:
        Task(double r, double i) : a(r), b(i) {}

        Task operator+(const Task& other) 
        {
            return Task(a + other.a, b + other.b);
        }

        void display() 
        {
            cout << "Task Number : \n\t" << a << " \n\t" << b << endl;
        }

        friend Task operator+(const Task& c1, const Task& c2);
};
Task operator+(const Task& c1, const Task& c2) 
{
    return Task(c1.a + c2.a, c1.b + c2.b);
}
int main() 
{
    Task c1(2.3, 3.6);
    Task c2(2.4, 1.4);
    printf("Before values : \n");
    c1.display();
    Task result1 = c1 + c2;
    printf("After values : \n");
    result1.display();
    return 0;
}