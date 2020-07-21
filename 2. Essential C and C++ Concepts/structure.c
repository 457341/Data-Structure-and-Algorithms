#include<stdio.h>
struct Rectangle
{
    int length;
    int breadth;
};
struct Complex
{
    int real;
    int img;
};
struct Student 
{
    int rollNo; //2byte
    char name[20]; // 20byte
    char dep[30]; //30byte
};
struct Card 
{
    int face; //2byte
    int  shape; // 2byte
    int color; //2byte
};



int main(int argc, char const *argv[])
{
    /* code */
    struct Rectangle r ; 
    struct Rectangle R = {4,5}; // another way of  struct declaration
    r.length = 2;
    r.breadth = 3;
    int area = r.breadth*r.breadth;
    printf("Area of a Rectangle: %d",area);


    // card of 52 array
    struct Card deck[52];
    return 0;
}
