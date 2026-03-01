
/************************************************
* Name          : B sridhar sagar
* KMID          : KM62AEAI04
* Date          : 11-09-25
* Program       :
7. Write a program to print an array in reverse order
sample input & output:

Enter size of array:4
Enter elments
12
34
56
77
elements are:12 34 56 77
reverse order:77 56 34 12 .
*
*************************************************/

#include <stdio.h>

int main()
{

	int n ,i;//declare  variables
	printf("Enter size of array:");//prompt to enter size of array
	scanf("%d",&n);//read array size
	int arr[n];//declare int array
    printf("Enter elments\n");
    for(i=0;i<n;i++)
	{
   	    scanf("%d",&arr[i]);//read elements
	}
	printf("elements are:");
    for(i=0;i<n;i++)
	{

		printf("%d ",arr[i]);//print elements
	}
	printf("\n");
	printf("reverse order:");
    for(i=n-1;i>=0;i--)
	{

		printf("%d ",arr[i]);//print elements in reverse order
	}


    return 0;
}

