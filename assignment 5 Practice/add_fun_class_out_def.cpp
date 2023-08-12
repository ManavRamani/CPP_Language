/*

*/

#include <iostream>
using namespace std;

int add(int a, int b) {
    return a + b;
}

class Calculator 
{
    public:
        int add_num(int a, int b) {
            return add(a, b);
        }
};



int main() {
    int num1, num2,sum1,sum2;
    Calculator done;

    cout << "Enter first numbers: ";
    cin >> num1;
    cout << "Enter second numbers: ";
    cin >> num2;

    sum1 = add(num1, num2);
    cout << " sum using function define outside the class : " << sum1 << endl;

    sum2 = done.add_num(num1, num2);
    cout << " sum using class obj : " << sum2 << endl;

    return 0;
}
