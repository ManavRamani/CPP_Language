/*
    3. Wap program to calculate Factorial of a number using class :
*/
#include <iostream>
using namespace std;

class Fact
{
    int ans;
    public:
        int cal_fact(int number)
        {
            if (number < 0)
            {
                throw runtime_error("Factorial is not defined for negative numbers.");
            }

            ans = 1;
            for (int i = 1; i <= number; ++i)
            {
                ans *= i;
            }
            return ans;
        }
};

int main()
{
    int num,ans;

    cout << "Enter a number : ";
    cin >> num;

    Fact done;
    try
    {
        ans = done.cal_fact(num);
        cout << "Factorial of : " << num << " : is : " << ans << endl;
    }
    catch (const exception &e)
    {
        cout << "Exception occurred : " << e.what() << endl;
    }

    return 0;
}