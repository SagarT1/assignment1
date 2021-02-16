/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include<stdlib.h>

int main()
{
int a[10];
int *p,big=-1123123;
p=(int*)malloc(sizeof(int)*10);
printf("enter the 10 elements:\n");
for( int i=0; i<10; i++)
{
    scanf("%d",(p+i));
    
    if(*(p+i)>big)big=*(p+i);
}
printf("big= %d",big);
    return 0;
}
