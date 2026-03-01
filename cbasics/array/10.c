
/************************************************
* Name          : B sridhar sagar
* KMID          : KM62AEAI04
* Date          : 11-09-25
* Program       :10. Write a program to swap two arrays in reverse order.
* Sample Input  : array1 ={1,2,3,4,5};
* Sample Output : array1 = {5,4,3,2,1};
*
*************************************************/

#include <stdio.h>

int main()
{
	int n,j,i,temp;
	printf("Enter size of array:");
	scanf("%d",&n);
	int arr1[n];
	int arr2[n];
    printf("Enter elments of first array\n");
    for(i=0;i<n;i++)
	{
   	    scanf("%d",&arr1[i]);
	}
	printf("elements of first array are:");
    for(i=0;i<n;i++)
	{

		printf("%d ",arr1[i]);
	}
	printf("\n");
    printf("Enter elments of second array\n");
    for(i=0;i<n;i++)
	{
   	    scanf("%d",&arr2[i]);
	}
	printf("elements of second array  are:");
    for(i=0;i<n;i++)
	{

		printf("%d ",arr2[i]);
	}
	printf("\n");
	i=0;
	j=n-1;
	while(i<n||j>=0)
	{   temp=arr1[i];
		arr1[i]=arr2[j];
		arr2[j]=temp;
		i++;
		j--;
	}
	printf("After Swap:\n");
	printf("first array elements:");
    for(i=0;i<n;i++)
	{

		printf("%d ",arr1[i]);
	}
	printf("\n");
	printf("second array elements:");
    for(i=0;i<n;i++)
	{

		printf("%d ",arr2[i]);
	}




    return 0;
}

