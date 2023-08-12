/*
    3. Constructor : type 2 -> Copy Constructor :
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
        add(add &ref)
        {
            a = ref.a;
            b = ref.b;
        }
        void sum()
        {
            cout << "Sum is : " << a + b << endl;
        }
};
int main()
{
    add done1(10, 20);
    add done2=done1;
    cout << "Parameterize Constructor : " << endl;
    done1.sum();
    cout << "Copy Constructor : " << endl;
    done2.sum();
}