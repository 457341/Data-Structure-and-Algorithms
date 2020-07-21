#include<stdio.h>
//int area(struct Rectangle r);
struct Test
{
    int A[5] ;
    int n ; 
    
};
void fun(struct Test t1){
    int Arr[5] = {0,0,0,0,0};
    t1.A[4] = 0;
    //t1.A = Arr; it is not working because only modifiable value can be assigned.
    t1.n = 6;
}
int main(int argc, char const *argv[])
{
    struct Test t = {{1,2,3,4,5},5};
    fun(t);
   
    return 0;
}
