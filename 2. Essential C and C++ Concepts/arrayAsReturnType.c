#include<stdio.h>
#include<stdlib.h>



int * fun(int size){  // returning an integer array
    int B[] = {7,8,9,10,11};
    int *p;
    p = (int*)malloc(size*sizeof(int));
    p =  B;

    return p;
   
    
}
int main(int argc, char const *argv[])
{
    int *A;
    A = fun(5);
    
 
 for (int i = 0; i < 5; i++)
    {
        printf("\nValues of an Array: %d\n",A[i]);
    }





    return 0;
}
