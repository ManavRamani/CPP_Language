/*
    2. WAP TO PERFORM ARITHMATIC OPERATION USING FRIEND CLASS :
*/
#include <iostream>
using namespace std;
class task
{
private:
    int a, b;

public:
    void get_val()
    {
        cout << " Enter Value of a : ";
        cin >> a;
        cout << " Enter Value of b :";
        cin >> b;
    }
    friend void add(task done);
    friend void sub(task done);
    friend void mul(task done);
    friend void div(task done);
};

void add(task done)
{
    int c;
    c = done.a + done.b;
    cout << "Sum is : " << c << endl;
}
void sub(task done)
{
    int c;
    c = done.a - done.b;
    cout << "Sub is : " << c << endl;
}
void mul(task done)
{
    int c;
    c = done.a * done.b;
    cout << "Mul is : " << c << endl;
}
void div(task done)
{
    int c;
    c = done.a / done.b;
    cout << "Div is : " << c << endl;
}

int main()
{
    task done;
    done.get_val();
    add(done);
    sub(done);
    mul(done);
    div(done);
}