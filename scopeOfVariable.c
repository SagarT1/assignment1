/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
// int inside_if=10;    
int outside_if=1;
if(outside_if==1)
{
    int inside_if=10;
}
printf("%d", inside_if);
printf("%d", outside_if);

    return 0;
}
