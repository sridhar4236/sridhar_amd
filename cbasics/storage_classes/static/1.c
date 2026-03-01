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
/*static int x;
//static int fun()
{
	x++;
}*/
int main()
{
	static int x;
	printf("main:%d%p\n",x,&x);
	fun();
	fun();
	printf("main:%d%p\n",x,&x);
}
static int x;
int fun()
{
	x++;
	printf("fun:%d%p\n",x,&x);
}
