/*
    3. Use the 'this' keyword :
*/
#include<iostream>
using namespace std;

class add
{
    private:
        int a,b;
    public:
        void sum()
        {
            cout << "Sum is : " << a+b <<endl;
        }
        void getdata(int a,int b)
        {
            this->a=a;
            this->b=b;
        }
};

int main()
{
    add done;
    done.getdata(20,30);
    done.sum();
}