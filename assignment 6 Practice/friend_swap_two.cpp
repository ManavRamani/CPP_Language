/*
    1. WAP TO SWAP TWO VALUE USING FRINED FUNCTION :
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
        cout << "Enter Value of a : ";
        cin >> a;
        cout << "Enter Value of b : ";
        cin >> b;
    }
    void show()
    {
        cout << "value of a is : " << a << endl;
        cout << "value of b is : " << b << endl;
    }
    friend void swap(task &done);
};
void swap(task &done)
{
    int c;
    c = done.a;
    done.a = done.b;
    done.b = c;
    cout << "After Swap : " << endl;
}

int main()
{
    task done;
    done.get_val();
    done.show();
    swap(done);
    done.show();
    return 0;
}
