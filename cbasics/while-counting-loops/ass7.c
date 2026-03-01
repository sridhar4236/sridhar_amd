/********************************************
* Name         : B SRIDHAR SAGAR
* KMID         : KM62AEAI04
* Date         : 03-09-25
* Program      :
* sample Input :
* Sample Output:   
* 
***************************************************/

#include<stdio.h>

int main()
{

	int n,i,j,x;

	
		printf("enter a number\n");
		 scanf("%d",&n);
		 for (i=0;i<n;i++)
		 {
			 printf("enter number\n");
			 scanf("%d",&x);
			 for(j=1;j<10;j++)
			 {
				 printf("%d*%d=%d\n",x,j,j*x);
			 }
		 }


	return 0;
} 

