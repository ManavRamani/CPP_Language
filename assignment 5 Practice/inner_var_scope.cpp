/*
    3-wap to print inner variable outside the scope with scope resolution operator : 
*/

#include <iostream>
using namespace std;

class task
{
    public:
            int i_var = 13;
            static int o_var;


};

int task :: o_var=36;

int main()
{
    task done;
    cout<< " inner variable : " << done.i_var << endl;
    cout<< " outter variable : " << task :: o_var << endl;

    return 0;
}