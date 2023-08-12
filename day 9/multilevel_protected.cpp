/*
    6. Multilevel : access value form class a and class b and print in class c :
*/

#include <iostream>
using namespace std;
class a
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
class b : public a
{
    protected:
        int b;

    public:
        void getdata1()
        {
            cout << "Enter b age : ";
            cin >> b;
        }
};
class c : public b
{
    private:
        int c;

    public:
        void getdata2()
        {
            cout << "Enter c age : ";
            cin >> c;
        }
        void show()
        {
            cout << "a Age is : " << a << endl;
            cout << "b Age is : " << b << endl;
            cout << "c Age is : " << c << endl;
        }
};

int main()
{
    c done;
    done.getdata();
    done.getdata1();
    done.getdata2();
    done.show();
}