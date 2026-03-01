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
int fun1()
{
	extern int x;
	x++;
	printf("%d %p\n",x,&x);
}
