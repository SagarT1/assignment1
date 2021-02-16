/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
void staticdemo()
{
    
   static int a=4;
    a=a+4;
    printf("%d ",a);
}



int main()
{
int i=1;
    do
    {
        staticdemo();
        i++;}
    while(i<=4);

    return 0;
}
