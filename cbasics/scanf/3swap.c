/********************************************
* Name         : B SRIDHAR SAGAR
* KMID         : KM62AEAI04
* Date         : 02-10-25
* Program      :swap the value of two numbers
* Sample Input  :a=10,b=20;
* Sample Output :a=20,b=10;

* 
***************************************************/
#include<stdio.h>
int main()
{
 int a,b,c;
 scanf("%d %d",&a,&b);
 c=a;
 a=b;
 b=c;
 printf("before swap %d:%d\nafter swap%d:%d",b,a,a,b);
return 0;
}

