#include <stdio.h>
#include<stdlib.h>

struct student
{
    char name[30];
    int rollno;
    int age;
    
    
};
typedef struct student stu;

//struct student stu1;//stu2,stu3;

int main()
{
stu *p,*q,*r;
p =(stu*)malloc(sizeof(stu)*3);
q =(stu*)malloc(sizeof(stu)*3);
r =(stu*)malloc(sizeof(stu)*3);
    
    printf("enter the details ");
    for(int i=0; i<1; i++)
    {
        printf("enter the name of %d student: \n",i+1);
        scanf("%s",p->name);
        printf("enter the roll no: \n");
        scanf("%d",&p->rollno);
        printf("enter the age: \n");
        scanf("%d", &p->age);
        
        printf("enter the name of %d student: \n",i+1);
        scanf("%s",q->name);
        printf("enter the roll no: \n");
        scanf("%d",&q->rollno);
        printf("enter the age: \n");
        scanf("%d", &q->age);
        
        printf("enter the name of %d student: \n",i+1);
        scanf("%s",r->name);
        printf("enter the roll no: \n");
        scanf("%d",&r->rollno);
        printf("enter the age: \n");
        scanf("%d", &r->age);
    
        
    }
printf("\n");
    for(int i=0; i<1; i++)
    {
        printf("details of %d student: \n",i+1);
        printf("name of the student: %s\n",p->name);
        printf("roll no: %d\n",p->rollno);
        printf(" age: %d\n" ,p->age);
        
        printf("details of %d student: \n",i+1);
        printf("name of the student: %s\n",q->name);
        printf("roll no: %d\n",q->rollno);
        printf(" age: %d\n" ,q->age);
        
        printf("details of %d student: \n",i+1);
        printf("name of the student: %s\n",r->name);
        printf("roll no: %d\n",r->rollno);
        printf(" age: %d\n" ,r->age);
        
      
        
    }
    
}
