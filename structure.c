#include <stdio.h>

struct Person{

char name[100];
int Age;
int rollno;
float marks;

};
int main()
{
    struct Person p1,*ptrp1;
    ptrp1=&p1;
   printf("\nEnter Name:");
   scanf("%s",&ptrp1->name);
   printf("\nEnter Roll No:");
   scanf("%d",&ptrp1->rollno);
   printf("\nEnter Age:");
   scanf("%d",&ptrp1->Age);
   printf("\nEnter Marks:");
   scanf("%f",&ptrp1->marks);

printf("Details:");
printf("\nName:%s",ptrp1->name);
printf("\nRoll No:%d",ptrp1->rollno);
printf("\nAge:%d",ptrp1->Age);
printf("\nMarks:%2f",ptrp1->marks);
}