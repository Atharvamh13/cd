#include <stdio.h>
int main()
{
    char ch;
    printf("enter the an alphabet: ");
    scanf("%c",&ch);
    if(ch>=65&&ch<=90)
    {
        ch=ch+32;
        printf("changed case:%c",ch);
    }
    else if(ch>=97&&ch<=122)
    {
        ch=ch-32;
        printf("changed case:%c",ch);
    }
    return 0;
}