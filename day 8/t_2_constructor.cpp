/*
    2. Constructor : type 2 -> Parameterize Constructor :
*/
#include <iostream>
using namespace std;

class add
{
private:
    int a, b;

public:
    add(int x, int y)
    {
        a = x;
        b = y;
    }
    void sum()
    {
        cout << "Sum is : " << a + b;
    }
};
int main()
{
    add done(10,20);
    done.sum();
}