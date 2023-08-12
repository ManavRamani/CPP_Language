/*
    2. Wap program to convert character upper case into lower case or lower case into upper case using class
*/
#include <iostream>
using namespace std;

class Convert
{
    public:
        char lover(char ch)
        {
            if (ch >= 'A' && ch <= 'Z')
            {
                return ch + 32;
            }
            return ch;
        }

        char upper(char ch)
        {
            if (ch >= 'a' && ch <= 'z')
            {
                return ch - 32;
            }
            return ch;
        }
};

int main()
{
    char c, lc, uc;
    Convert done;

    cout << "Enter any character : ";
    cin >> c;

    if (c >= 'A' && c <= 'Z')
    {
        lc = done.lover(c);
        cout << "lower case of " << c << " : is : " << lc << endl;
    }
    else if (c >= 'a' && c <= 'z')
    {
        uc = done.upper(c);
        cout << "upper case of " << c << " : is : " << uc << endl;
    }
    else
    {
        cout << "Retry...!!!" << endl;
    }

    return 0;
}