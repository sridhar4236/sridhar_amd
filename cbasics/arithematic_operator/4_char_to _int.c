/********************************************
* Name         : B SRIDHAR SAGAR
* KMID         : KM62AEAI04
* Date         : 02-10-25
*Program       :input three digit read them into three different character make one interger out of them an display.
* Sample Input  :char c='3',b='4',a='5'
* Sample Output :i=345(store the interger value 345 in integer i and print i)

* 
***************************************************/
#include<stdio.h>
int main()
{
char c,b,d,g='0';
int i,h,e,f;
scanf("%c %c %c",&c,&b,&d);
h=c-g;
e=b-g;
f=d-g;
i=(h * 100)+(e * 10)+f;
printf("%d",i);
return 0;
}
