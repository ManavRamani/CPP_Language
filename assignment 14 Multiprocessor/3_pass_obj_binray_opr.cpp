/*
    2. Wap to addition of three values pass through doneect,
         using binary operator overloading :
*/
#include <iostream>
using namespace std;

class Sum
{
    private:
        int value;

    public:
        Sum(int val) : value(val) {}

        Sum operator+(const Sum &other)
        {
            int sum = value + other.value;
            return Sum(sum);
        }

        int getValue() const
        {
            return value;
        }
};

int main()
{
    Sum done1(10);
    Sum done2(20);
    Sum done3(20);
    Sum Ans = done1 + done2 + done3;
    cout << "Sum is : " << Ans.getValue() << endl;
    return 0;
}