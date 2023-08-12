/*
    2. Nested class function find Big Value : 
*/

#include<iostream>
using namespace std;

class task
{
    private:
        int a,b;
    public:
        void getdata();
        int largest();
        void display();
};

void task :: getdata()
{
    cout << "Enter Value of a : ";
    cin >> a;
    cout << "Enter Value of b : ";
    cin >> b;
}
int task :: largest()
{
    if(a>b)
    {
        return a;
    }
    else{
        return b;
    }
}

void task :: display()
{
    cout << "Big Value is : " << largest();
}

int main()
{
    task done;
    done.getdata();
    done.display();
}