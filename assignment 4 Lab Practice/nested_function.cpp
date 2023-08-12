/*
    3. WAP TO PERFORM NESTED FUNCTION :(find big value....)
*/

#include<iostream>
using namespace std;

class big_val
{
    private:
        int a,b;
    public:
        void getdata();
        int big();
        void display();

};

void big_val :: getdata()
{
    cout << "Value of a : ";
    cin >> a;
    cout << "Value of b : ";
    cin >> b;
}

int big_val :: big()
{
    if(a>b)
    {
        return a;
    }
    else{
        return b;
    }
}

void big_val :: display()
{
    cout << "Big Value is : " << big();
}

int main()
{
    big_val done;
    done.getdata();
    done.display();
    return 0;
}
