#include<stdio.h>
float circum(float a);
float area(float b);
int main()
{ 
    float r;
	printf("\nEnter radius of circle: ");
	scanf("%f",&r);
	
	float Area=area(r);
	float Circum=circum(r);
	
	printf("\nArea of circle : %f",Area);
	printf("\nCircumference Of circle :%f",Circum);
	
	return 0;
}

float area(float r)
{   float pi=3.14;
   float Area=pi*r*r;
   return Area;	
}
float circum(float r)
{
	float pi=3.14;
	float Circum=2*pi*r;
	return Circum;
}
