/********************************************
* Name         : B SRIDHAR SAGAR
* KMID         : KM62AEAI04
* Date         : 02-10-25
* Program       :read a 4 digit number and print it in the following formates using airthmetic operators only
* Sample Input  :4532
* Sample Output :2   4   4      4532  2345       2
*                3   5   45     453             3 
*                5   3   453    45             5
*                4   2   4532   4             4              


* 
***************************************************/
#include<stdio.h>
int main()

{
int a,b,c,d,n;
printf("enter a number");
scanf("%d",&a);
n=d=c=b=a;
a=n%10;
b=(n%100)/10;
c=(n/100)%10;
d=n/1000;
printf("%d\n%d\n%d\n%d\n",a,b,c,d);
printf("\n%d\n%d\n%d\n%d\n",d,c,b,a);
printf("\n%d\n%d\n%d\n%d\n",n/1000,n/100,n/10,n);
printf("\n%d\n%d\n%d\n%d\n",n,n/10,n/100,n/1000);
printf("\n%d %d %d %d\n",a,b,c,d);
printf("\n   %d\n  %d\n %d\n%d\n",a,b,c,d);
return 0;
}
