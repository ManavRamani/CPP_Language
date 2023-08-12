/*
    3. define the constructor and perform all arithmetic task :
*/
#include<iostream>
using namespace std;

class task
{
        int a,b;
    public:    
        task()
        {
            cout << "Enter Value of a : ";
            cin >> a;
            cout << "Enter Value of b : ";
            cin >> b;
        }
        void show()
        {
            cout << "a is : " << a << endl;
            cout << "b is : " << b << endl;
        }
        void add()
        {
            cout << "Add... : " <<endl;
            cout << "a + b : " << a + b << endl;
        }
        void sub()
        {
            cout << "Sub... : " <<endl;
            cout << "a - b : " << a - b << endl;
        }
        void mul()
        {
            cout << "Mul... : " <<endl;
            cout << "a * b : " << a * b << endl;
        }
        void div()
        {
            cout << "Div... : " <<endl;
            cout << "a / b : " << a / b << endl;
        }
};
int main()
{
    task done;
    done.show();

    done.add();
    done.sub();
    done.mul();
    done.div();
}