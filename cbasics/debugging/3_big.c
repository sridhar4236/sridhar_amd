/********************************************
* Name         : B SRIDHAR SAGAR
* KMID         : KM62AEAI04
* Date         : 08-10-25
* Program      :
* sample Input :
* Sample Output:   
* 
***************************************************/

#include<stdio.h>

int main()
{

	int a=-1,i , big=0 ,b;
	printf("enter");
	scanf("%d",&b);
		for(i=0;i<b;i++)
		{
			scanf("%d",&a);
			if(big<a)
				big=a;
		}
	printf("biggest : %d",big);

	return 0;
} 

