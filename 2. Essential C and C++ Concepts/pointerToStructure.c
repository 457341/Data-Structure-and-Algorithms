#include<stdio.h>
#include<stdlib.h>
struct Rectangle
{
    int length;
    int breadth;
};

int main()
{
    struct Rectangle r = {5,2};
    struct Rectangle *p = &r;
    struct Rectangle R ;
    // Without using pointer 
    //r.breadth = 10; 
    //r.length = 3;

    // with pointer
    //(*p).length = 12;
    //(*p).breadth = 1;
     // or just simpler way 
     int l = p->length= 20;
    int b =  p->breadth = 30;

    int area = l*b;

    printf("Length of a Rectangle: %d\n",p->length);
    printf("Area of a Rectangle: %d\n",p->breadth);
    printf("Area of a Rectangle: %d",area);

    printf(".....");
    printf("Value of Length with referance R: %d",R.length); // It prints always 1 but why?
    return 0;
}
