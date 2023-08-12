/*
    2. wap to using single inheritance get value of height and width in base class
    and multiple them in derived class :
*/

#include <iostream>
using namespace std;

class Shape
{
    protected:
        float height;
        float width;

    public:
        void get_val()
        {
            cout << "Enter height: ";
            cin >> height;
            cout << "Enter width: ";
            cin >> width;
        }
};

class Rectangle : public Shape
{
    public:
        float cal_area()
        {
            return height * width;
        }
};

int main()
{
    float area;
    Rectangle rectangle;
    rectangle.get_val();

    area = rectangle.cal_area();
    cout << "Area of the rectangle: " << area << endl;

    return 0;
}