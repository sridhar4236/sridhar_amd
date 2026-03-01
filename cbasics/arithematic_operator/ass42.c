#include<stdio.h>
int main()
{
char c,b,d;
int i;
scanf("%c %c %c",&c,&b,&d);
c=c-'0';
b=b-'0';
d=d-'0';
i=(c * 100)+(b * 10)+d;
printf("%d",i);
return 0;
}
