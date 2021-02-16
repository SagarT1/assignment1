/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include<stdlib.h>

struct student
{
    char name[30];
    int rollno;
    int age;
    
    
};

struct student stu1,stu2,stu3;
int main()
{
    
    printf("enter the details ");
    for(int i=0; i<1; i++)
    {
        printf("enter the name of %d student: \n",i+1);
        scanf("%s",stu1.name);
        printf("enter the roll no: \n");
        scanf("%d",&stu1.rollno);
        printf("enter the age: \n");
        scanf("%d", &stu1.age);
        
        printf("\nenter the name of %d student: \n",i+2);
        scanf("%s",stu2.name);
        printf("enter the roll no: \n");
        scanf("%d",&stu2.rollno);
        printf("enter the age: \n");
        scanf("%d", &stu2.age);
        
        printf("\nenter the name of %d student: \n",i+3);
        scanf("%s",stu3.name);
        printf("enter the roll no: \n");
        scanf("%d",&stu3.rollno);
        printf("enter the age: \n");
        scanf("%d", &stu3.age);
        
    }
printf("\n");
    for(int i=0; i<1; i++)
    {
        printf("details of %d student: \n",i+1);
        printf("name of the student: %s\n",stu1.name);
        printf("roll no: %d\n",stu1.rollno);
        printf(" age: %d\n" ,stu1.age);
        
        printf("details of %d student: \n",i+1);
        printf("name of the student: %s\n",stu2.name);
        printf("roll no: %d\n",stu2.rollno);
        printf(" age: %d\n", stu2.age);
        
        printf("details of %d student: \n",i+1);
        printf("name of the student: %s\n",stu3.name);
        printf("roll no: %d\n",stu3.rollno);
        printf(" age: %d\n", stu3.age);
        
    }
    
}