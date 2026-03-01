
/************************************************
* Name          : B sridhar sagar
* KMID          : KM62AEAI04
* Date          : 11-09-25
* Program       :
6. Write a function to search for a specific element given by the user, in an array and display its index.  Function takes array and element to search as inputs, and returns the index as output. If element not found, return -1.

* Sample Input &  Output :
~The size of array:5 
Enter elments
23
45
45  
6
7
Enter elment to searched
45
element index:1
*
*************************************************/

#include <stdio.h>

/*
 *  @brief  : This function is used to search the element 
 *  @Param1 : int n size
 *  @Param2 : int array
 *	@retval : int - i 
 */


int fun(int arr[],int n)
{
 
	int k,i;//declare  variables
    printf("Enter elment to searched\n");
	scanf("%d",&k);//read element
    for(i=0;i<n;i++)
	{  
		if(k==arr[i])
		{
			return i;

		}
	}
	return -1;
	

}



int main()
{
int n,b,i;//declare  variables
	printf("The size of array:");//prompt to enter size of array
	scanf("%d",&n);//read input
	int arr[n];//declare int array
    printf("Enter elments\n");//prompt to enter elements
    for(i=0;i<n;i++)
	{  
   	    scanf("%d",&arr[i]);//read elements
	}
	b=fun(arr,n);//function call to search elements
	if(b== -1)
		printf("element is found");//element is found
    else 	 
		printf("element index:%d",b);//element index


    return 0;
}

