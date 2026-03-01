/********************************************
* Name         : B SRIDHAR SAGAR
* KMID         : KM62AEAI04
* Date         : 04-09-25
* Program      :
* sample Input :
* Sample Output:   
* 
***************************************************/

#include<stdio.h>

int main()
{

	int j,i,n,k,a,m;
	printf("enter a number");
	scanf("%d",&n);
/*	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
		{
			printf("* ");
		}
		printf("\n");
	}*/
/*	for(i=1;i<=n;i++)
	{
		for(j=0;j<n-i;j++)
		{
			printf(" ");
		}		
			for(k=1;k<=i;k++)
			{
			
				printf("* ");
		
			}
			*/
/*		for(i=1;i<=n;i++)
	{
		for(j=1;j<=n-i;j++)
		{
			printf(" ");
		}		
			for(k=1;k<=2*i-1;k++)
			{
			
				printf("*");
		
			}

		
		printf("\n");
	}*/
/*
	for(i=1;i<=2*n-1;i++)
	{
		for(j=1;j<=n-i;j++)
		{
			printf(" ");
			if(i==n)
				break;
		}		
			for(k=1;k<=i;k++)
			{
			
				printf("* ");

	if(i==n)
				break;

		
			}
printf("\n");

	}*/
/*	n--;
	
		for(i=n;i>=1;i--)
	{
		for(j=1;j<=n-i;j++)
		{
			printf(" ");
		}		
			for(k=1;k<=i;k++)
			{
			
				printf("*  ");
		
			}

		
		printf("\n");
	} *///	n--;
	/*
		for(i=1;i<=n;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf(" ");
		}		
			for(k=1;k<=2*(n-i)+1;k++)
			{
			
				printf("*");
		
			}

		
		printf("\n");
	}  */ 

		for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
		 { 
			 if (i==j  )
				 printf("\\");
			 else
			 
				 if(n+1==i+j)
			printf("/");
			 
			 else
				 printf("*");
		}	
	

		printf("\n");

	}

	return 0;
}

