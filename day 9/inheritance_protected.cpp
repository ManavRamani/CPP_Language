/*
    3. Inheritance : Get Value from parent and child but show data only child... :
*/
#include <iostream>
using namespace std;
class parent
{
protected:
    int a;

public:
    void getdata()
    {
        cout << "Enter a age : ";
        cin >> a;
    }
};
class child : public parent
{
private:
    int b;

public:
    void getdata1()
    {
        cout << "Enter b age : ";
        cin >> b;
    }
    void show1()
    {
        cout << "a Age is : " << a << endl;
        cout << "b Age is : " << b << endl;
    }
};

int main()
{
    child done;
    done.getdata();
    done.getdata1();
    done.show1();
}