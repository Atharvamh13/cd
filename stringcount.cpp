#include<stdio.h>
int main()
{
	char str[20];
	int count=0;
	printf("Enter a String : ");
	scanf("%s",&str);
	for(int i=0;str[i]!='\0';++i)
	{
		count++;
	}
	printf("\n%d",count);
	
}