/*
    4. Constructor : type 4 -> ~desconstructor :
*/
#include <iostream>
using namespace std;

class mgs
{
private:
    int a, b;

public:
    mgs()
    {
       cout << "This is default Constructor" << endl; 
    }
    ~mgs()
    {
       cout << "This is desconstructor" << endl;         
    }

};
int main()
{
    mgs done;
}