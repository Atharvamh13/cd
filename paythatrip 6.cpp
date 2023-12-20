#include<stdio.h>
int main()
{
	int a,b,c;
    printf("Phythagorean Triplet Upto 100");
    for(a=1;a<=100;a++)
    {
    	for(b=a;b<=100;b++)
    	{
    		for(c=b;c<=100;c++)
    		{   
    			if(a*a+b*b==c*c)
    			{
    				
    				printf("\n%d %d = %d",a,b,c);
				}
			}
		}
	}
	return 0;
}