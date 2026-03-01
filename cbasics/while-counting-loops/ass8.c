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

	int n,i,j,x,t=0,a=0,m;
	float p,big=0;


	
		printf("enter a number\n");
		 scanf("%d",&n);
		 for (i=0;i<n;i++)
		 {
			 printf("enter number\n");
			 scanf("%d",&x);
			 for(j=0;j<6;j++)
			 {
				 printf("enter");
				 scanf("%d",&m);
				 t=t+m;
			 }
			 p=t/6.0;
			 if(p>big)
			 {
				 big =p;
				 a=i;
			 }
		 }

printf("%d %f",a, big);
	return 0;
} 

