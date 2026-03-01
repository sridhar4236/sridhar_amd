
/************************************************
* Name          : B sridhar sagar
* KMID          : KM62AEAI04
* Date          : 11-09-25
* Program       :


8. Write a program to reverse an array and print it (Reverse the array by swapping both edges of the array and move inside and repeat till middle of the array):  

    Input : array1 ={1,2,3,4,5};
    Output : array1 = {5,4,3,2,1};

* Sampe Input & Ouput:
Enter size of array:4
Enter elments
12
34
56
78
elements are:12 34 56 78
After Swap:78 56 34 12
*************************************************/

#include <stdio.h>

int main()
{

	int n,j,i,m,temp;//declare  variables
	printf("Enter size of array:");//prompt to enter size of array
	scanf("%d",&n);//read array size
	int arr[n];//declare array
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
	m=n/2;
	j=n-1;
	for(i=0;i<m;i++)
	{   temp=arr[i];
		arr[i]=arr[j-i];
		arr[j-i]=temp;
	}
	printf("After Swap:");
    for(i=0;i<n;i++)
	{

		printf("%d ",arr[i]);//print elements after swap
	}

    return 0;
}


