/*
    2. Inheritance : Get Value :
*/
#include <iostream>
using namespace std;
class parent
{
private:
    int a;

public:
    void getdata()
    {
        cout << "Enter Your Age : ";
        cin >> a;
    }
    void show()
    {
        cout << "Your Age is : " << a << endl;
    }
};
class child : public parent
{
private:
    int b;

public:
    void getdata1()
    {
        cout << "Enter Your Age : ";
        cin >> b;
    }
    void show1()
    {
        cout << "Your Age is : " << b << endl;
    }
};

int main()
{
    child done;
    done.getdata1();
    done.show1();
    done.getdata();
    done.show();
}