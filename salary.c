#include <stdio.h>
int main()
{

float bs, hra,da,pf,ns,gs;
printf("enter the Basic Salary :\n");
scanf("%f",&bs);

hra=bs*0.2;
printf("\nHouse Rent Allowance(HRA) is:%.2f",hra);

da=bs*0.4;
printf("\nDearness allowance(DA):%.2f",da);

gs=bs+hra+da;
printf("\nGross Salary(GS):%.2f",gs);

pf=gs*0.1;
printf("\nProvided Funds(PF):%.2f",pf);

ns=gs-pf;
printf("\nNet Salary(NS):%.2f",ns);

return 0;
}