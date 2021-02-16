/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include<stdlib.h>
#include<string.h>
struct student{
    char name[30];
    int rollno;
    int age;
}stu[4];

void insert();
void delete();
void display();
void update();
int option;
int main()
{
    
    while(1){
    printf("enter the what operation you want to do: \n");
    printf(" 1>>insert\n 2>>delete\n 3>>update\n 4>>display\n 5>>quit\n");
    scanf("%d", &option);
    switch(option)
    {
        
        case 1: insert();
        break;
       case 2: delete();
        break;
        case 3: update();
        break;
        case 4: display();
        break;
        case 5: exit(1);
        break;
        default:
        printf("-------------wrong input-----------");
        
        
    }}
    return 0;
}
    int nostudents;
   void insert()
    {
        printf("enter the number of students:");
        scanf("%d", &nostudents);
        for(int i=0; i< nostudents; i++)
        {
            printf("enter the student name: ");
            scanf("%s", stu[i].name);
            printf("enter the student roll no: ");
            scanf("%d", &stu[i].rollno);
            printf("enter the student age: ");
            scanf("%d", &stu[i].age);
            
            
        }}
        
        void display()
        {
         for(int i=0; i< nostudents; i++)
        {
           // printf("enter the student name: ");
           printf("\n-------------------------------\n");
           printf("|                         |\n");
          
            printf("| name: %s              \n", stu[i].name);
            //printf("enter the student roll no: ");
            printf("| rollno: %d                \n", stu[i].rollno);
            //printf("enter the student age: ");
            printf("| age: %d                    \n  ", stu[i].age);
              
            
        }   
        }
        
        int uId;
        void update()
        
        {
            printf("enter the id you want to update: ");
            scanf("%d", &uId);
            
            for(int i=0; i< nostudents; i++)
            {
                if(uId==stu[i].rollno)
                {
                    printf("enter the new name: ");
                    scanf("%s", stu[i].name);
                    printf("enter the new age: ");
                    scanf("%d", &stu[i].age);
                }
                
            }
            
        }
        
        int dId,indx;
        void delete()
        {
            printf("enter the Id to delete: ");
            scanf("%d",&dId);
            for(int i=0; i<nostudents;i++)
            {
                if(dId == stu[i].rollno)
                {
                    strcpy(stu[i].name, stu[i+1].name);
                    stu[i].age= stu[i+1].age;
                    stu[i].rollno=stu[i+1].rollno;
                    indx=i;
                }
                
            }
            for(int i =indx; i< nostudents;i++)
            {
                stu[i].age=stu[i+1].age;
                stu[i].rollno=stu[i+1].rollno;
                strcpy(stu[i].name, stu[i+1].name);
            }
            
            --nostudents;
            
        }
        
    

