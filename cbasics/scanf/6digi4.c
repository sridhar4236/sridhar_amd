/********************************************
* Name         : B SRIDHAR SAGAR
* KMID         : KM62AEAI04
* Date         : 02-10-25
* Program      :read a 4 digit integer into a variable using sf&pf in the below formate using escape sequence
* Sample Input  :1234
* Sample Output :1     ,1
*                12    , 2
*                123   ,  3
*                1234  ,   4

* 
***************************************************/
#include<stdio.h>
int main()
{
int a;
scanf("%d",&a);
printf("%d\b\b\b   \n%d\b\b  \n%d\b \n%d\n\n%d\b\b\b   \n%d\b\b  \r \n%d\b \r  \n%d\r   \n",a,a,a,a,a,a,a,a);
return 0;
}

