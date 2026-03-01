/********************************************
* Name         : B SRIDHAR SAGAR
* KMID         : KM62AEAI04
* Date         : 10-09-25
* Program      :
* sample Input :
* Sample Output:   
* 
***************************************************/

#include<stdio.h>
int x;
int main()
{
 extern int x;
 printf("%d %p\n",x,&x);
 fun();
 fun();
 printf("%d %p\n",x,&x);
}
int x;
int fun()
{
	x++;
	printf("%d %p",x,&x);
}

