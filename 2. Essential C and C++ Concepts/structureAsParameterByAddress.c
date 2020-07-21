#include<stdio.h>
//int area(struct Rectangle r);
struct Rectangle
{
    int length ;
    int breadth ; 
    
};
void changeLengthAndBreadth(struct Rectangle *r1,int l,int b){
    r1->length = l;
    r1->breadth = b;
}
void changeBreadth(struct Rectangle *r1,int b){
   
    r1->breadth = b;
}
int area(struct Rectangle r1){
    return r1.breadth * r1.length;
}
int main(int argc, char const *argv[])
{
    struct Rectangle r = {1};
    struct Rectangle R = {2,3};
    changeLengthAndBreadth(&R,10,5);
    changeBreadth(&r,6);
    printf("Area of a Rectangle: %d\n",area(r));
    printf("Area of a Rectangle: %d",area(R));
    return 0;
}
