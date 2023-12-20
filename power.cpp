#include<stdio.h>
#include<math.h>
int main()
{   
    double base,exp,result;

    printf("Enter Base of Number");
	scanf("%lf",&base);
	printf("Enter Exponent Of Number :");
	scanf("%lf",&exp);
	
	result=pow(base,exp);
	printf("\n%1lf^%1lf=%2lf",base,exp,result);
	return 0;
}