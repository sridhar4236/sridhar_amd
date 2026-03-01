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
int x=7;
int main()
{
	x=5;
	printf("%d,%p\n",x);
	register int x=3;
	printf("%d,%p\n",x);
	fun();
	printf("%d,%p\n",x);
}
int fun()
{
printf("%d,%p\n",x);

  
}


