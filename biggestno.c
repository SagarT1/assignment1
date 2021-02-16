/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>


int main()
{
 int a[10],big=-11312123;
 printf("enter the 10 elements");
 for( int i=0; i<10; i++)
    {
    scanf("%d",&a[i]);
    if(a[i]>big)
    big=a[i];
        
    }

    printf("%d",big);

    return 0;
}
