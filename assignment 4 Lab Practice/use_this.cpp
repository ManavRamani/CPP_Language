/*
    2. WAP TO USE THIS KEYWORD :
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
            cout << "Sum is : " << a+b;
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
    done.getdata(13,23);
    done.sum();
    return 0;
}