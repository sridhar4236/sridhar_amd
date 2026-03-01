/********************************************
* Name         : B SRIDHAR SAGAR
* KMID         : KM62AEAI04
* Date         : 18-09-25
* Program      :
* sample Input :
* Sample Output:   
* 
***************************************************/

#include<stdio.h>

int main()
{

	int a,b;
	int *p1=&a,*p2=&b;
	printf("a b\n");
	scanf("%d%d",&a,&b);
	printf("%d\n",*p1+*p2);

	return 0;
} 

