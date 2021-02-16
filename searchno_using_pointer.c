/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include<stdlib.h>
int a[10];
int *ptr;
void searchfunc(int search)
{
    int flag=0;
    for(int i=0;i<10;i++)
    {
    if(search==*(ptr+i))
    {
        flag=1;
    }
    }
    if(flag==1)
        printf("\nfound");
    else
        printf("\nnot found");
    
}


int main()
{



ptr=(int*)malloc(sizeof(int)*10);
int search;
printf("enter the 10 elements");
for(int i=0;i<10;i++)
{
    scanf("%d",(ptr+i));
    
}
printf("\nenter the number to search:");
scanf("%d",&search);
searchfunc(search);



    return 0;
}
