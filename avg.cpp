#include<stdio.h>
#include<math.h>
int main()
{   int i,avg,result,size;
    int marks[5];
	printf("Enter Marks Of 5 subjects obtainesd by student :\n");
	for(i=0;i<5;i++)
	{
		scanf("%d",&marks[i]);
	}
	avg=marks[0]+marks[1]+marks[2]+marks[3]+marks[4];
    result=avg/5;	
	printf("\nAverage mark of a Student is :%d",result);

	return 0;
}