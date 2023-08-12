/*
    4. Wap program to check weather a character is vowel or consonant using class :
*/
#include <iostream>
#include <cctype>
using namespace std;

class check_char
{
    public:
        bool vowel(char ch)
        {
            ch = tolower(ch);
            return (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u');
        }
};

int main()
{
    char c;
    check_char done;

    cout << "Enter any character for check vowel or not : ";
    cin >> c;

    if (isalpha(c))
    {
        if (done.vowel(c))
        {
            cout << c << " : is a vowel" << endl;
        }
        else
        {
            cout << c << " : is a consonant" << endl;
        }
    }
    else
    {
        cout << "Retry...!" << endl;
    }

    return 0;
}