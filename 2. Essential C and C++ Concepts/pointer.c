#include<stdio.h>
#include <stdlib.h>
int main(int argc, char const *argv[])
{
    int a = 10; // Data Varibale
    int *p ; // Address Variale
    p = &a;
    printf("%d",a);
    printf("%d",*p);

    // Accessing heap 
    int *ptr;
    ptr = (int)malloc(5*sizeof(int));// here type casting is did otherwise void is returned value/
    return 0;
}
