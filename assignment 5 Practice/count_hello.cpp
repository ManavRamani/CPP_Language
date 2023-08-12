/*
    2.-wap to count how many time hello world printed using called multiple object with static member and static function :
*/

#include <iostream>
using namespace std;

class task
{
    private:
        static int count;

    public:
        static void print()
        {
            std::cout << "Hello, World!" << endl;
            count++;
        }

        static int getCount()
        {
            return count;
        }
};

int task::count = 0;

int main()
{
    task done1, done2, done3;

    task::print();
    done1.print();
    done2.print();
    done3.print();

    cout << "\n Number of times 'Hello, World!' was printed : " << task::getCount() << endl;

    return 0;
}
