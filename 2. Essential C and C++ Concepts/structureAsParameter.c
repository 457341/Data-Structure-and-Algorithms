#include<stdio.h>
//int area(struct Rectangle r);
struct Rectangle
{
    int length ;
    int breadth ; //we can't intialize the varibale inside the structure .
                // The direct answer is because the structure definition 
                //declares a type and not a variable that can be initialized.
    
};
int area(struct Rectangle r1){
    return r1.breadth * r1.length;
}
int main(int argc, char const *argv[])
{
    struct Rectangle r;
    struct Rectangle R = {2,3};
    printf("Area of a Rectangle: %d\n",area(r));
    printf("Area of a Rectangle: %d",area(R));
    return 0;
}
