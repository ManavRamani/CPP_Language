/*
    1. write a program to perform all arithmetic operation using multilevel inheritance :
*/
#include <iostream>
using namespace std;
class Arithmetic
{
    protected:
        int num1, num2;

    public:
        Arithmetic(int op1, int op2) : num1(op1), num2(op2) {}

        int getnum1() const
        {
            return num1;
        }

        int getnum2() const
        {
            return num2;
        }
};

class Addition : public Arithmetic
{
    public:
        Addition(int op1, int op2) : Arithmetic(op1, op2) {}

        int performOperation() const
        {
            return getnum1() + getnum2();
        }
};

class Subtraction : public Arithmetic
{
    public:
        Subtraction(int op1, int op2) : Arithmetic(op1, op2) {}

        int performOperation() const
        {
            return getnum1() - getnum2();
        }
};

class Multiplication : public Arithmetic
{
    public:
        Multiplication(int op1, int op2) : Arithmetic(op1, op2) {}

        int performOperation() const
        {
            return getnum1() * getnum2();
        }
};

class Division : public Arithmetic
{
    public:
        Division(int op1, int op2) : Arithmetic(op1, op2) {}

        double performOperation() const
        {
            if (getnum2() != 0)
            {
                return static_cast<double>(getnum1()) / getnum2();
            }
            else
            {
                cout << "Plz Retry unother value... " << endl;
                return 0;
            }
        }
};

int main()
{
    int a = 10, b = 5;

    Addition add(a, b);
    Subtraction subtract(a, b);
    Multiplication multiply(a, b);
    Division divide(a, b);

    cout << "Addition : " << add.performOperation() << endl;
    
    cout << "Subtraction : " << subtract.performOperation() << endl;
    
    cout << "Multiplication : " << multiply.performOperation() << endl;
    
    cout << "Division : " << divide.performOperation() << endl;

    return 0;
}
