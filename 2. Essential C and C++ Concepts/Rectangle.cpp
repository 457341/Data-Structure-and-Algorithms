#include <iostream>
using namespace std;
class Rectangle
{
private:
    /* data */
    int length;
    int breadth;
public:
    Rectangle(/* args */){length= breadth=1;}
      Rectangle(int l,int b);
   
    int area();
    int perimeter();
    int getLength(){return length;}
    void setLenth(int l){length = l;}
     ~Rectangle();
};

Rectangle::Rectangle(int l,int b)
{
    length = l;
    breadth = b;
}

Rectangle::~Rectangle()
{
}
int Rectangle::area()
{
    return length*breadth;
}
int Rectangle::perimeter()
{
    return 2*(length+breadth);
}
int main()
{
    Rectangle r (2,3);
    cout << r.area();
    cout << r.perimeter();
    r.setLenth(20);
    cout << r.getLength();
    return 0;
}
