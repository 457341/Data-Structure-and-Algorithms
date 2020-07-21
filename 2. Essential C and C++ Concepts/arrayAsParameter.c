#include<stdio.h>
void fun(int *a,int size){

    a[2] = 6;
   
    
}
void foo(int a[],int size){

    a[2] = 12;
   
    
}
int main(int argc, char const *argv[])
{
    int A[] = {1,2,3,4,5};
    int B[] = {7,8,9,10,11};
    foo(B,5);
    fun(A,5);
 for (int i = 0; i < 5; i++)
    {
        printf("\nValues of an Array: %d\n",A[i]);
    }
printf(",,,,,,,,,,,,,,,,,");


for (int i = 0; i < 5; i++)
    {
        printf("\nValues of an Array: %d\n",B[i]);
    }

    return 0;
}
