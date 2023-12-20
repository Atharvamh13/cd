#include<stdio.h>
int main()
{
	int num,temp,n1,n2,n3,n4,s1,s2,s3,s4,sum,sn;
	printf("Enter A Four Digit Number :");
	scanf("%4d",&num);
	
	temp=num;
	n1=num/1000;
	num=num%1000;
	n2=num/100;
	num=num%100;
	n3=num/10;
	num=num%10;
	n4=num;
	
	printf("%d %d %d %d\n",n1,n2,n3,n4);
	
	s1=n1*1000;
	s2=n2*100;
	s3=n3*10;
	s4=n4;
	
	sum=s1+s2+s3+s4;
	sn=n1+n2+n3+n4;
	printf("%d %d %d %d = %d",s1,s2,s3,s4,sum);
	printf("\n%d",sn);
	return 0;
	
}