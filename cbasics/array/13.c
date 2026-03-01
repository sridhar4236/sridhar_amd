
/************************************************
* Name          : B sridhar sagar
* KMID          : KM62AEAI04
* Date          : 11-09-25
* Program       :

13. Write an compare function to take 2 arrays as input and return 1 if they are equal and 0 if they are not equal ( sizes to be sent as separate arguments)

int compare(int arr1[],int m,int arr2[],int n)

* Sample Input &  Output :
Enter size of array:3
Enter first array elments:
12
34
56
elements are:12 34 56 
Enter second array elments
12
56
89
elements are:12 56 89 


*
*************************************************/

#include <stdio.h>
/*
 *  @brief  : This function is used to search the element 
 *  @Param1 : int n size
 *  @Param2 : int array1
 *  @Param3 : int array2
 *	@retval : int - i 
 */

int compare(int arr1[],int n,int arr2[])
{
 int i;//declare variable
 for(i=0;i<n;i++)
 { 
	 if(arr1[i]!=arr2[i])
	 {
		 return 0;//not equal
	 }
 }
 return 1;//equal

 }

int main()
{
	int n,i,b;//declare variables
	printf("Enter size of array:");//prompt to enter size of array
	scanf("%d",&n);//read size
	int arr1[n];//declare int array1
	int arr2[n];//declare int array2
    printf("Enter first array elments:\n");
    for(i=0;i<n;i++)
	{
   	    scanf("%d",&arr1[i]);//read elements
	}
	printf("elements are:");
    for(i=0;i<n;i++)
	{

		printf("%d ",arr1[i]);//print elements
	}
	printf("\n");
    printf("Enter second array elments\n");
    for(i=0;i<n;i++)
	{
   	    scanf("%d",&arr2[i]);//read elements
	}
	printf("elements are:");
    for(i=0;i<n;i++)
	{

		printf("%d ",arr2[i]);//print elements
	}
	printf("\n");
	b=compare(arr1,n,arr2);//function call to compare array1 and array2 
	if (b==1)
		printf("arrays are same");// arrays are same
	else
		printf("arrays are not equal");// arrays are not same
   return 0;
}

