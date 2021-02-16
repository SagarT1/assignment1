/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

void swap(int *a,int *b)
{
    int temp=*a;
    *a=*b;
    *b=temp;

}

int main()
{
 int a=10,b=20;
 printf("before swap a=%d and b=%d:\n",a,b);
 swap(&a,&b);
 printf("after swap a=%d and b=%d: ",a,b);
 

    return 0;
}
