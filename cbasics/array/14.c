
/************************************************
* Name          : B sridhar sagar
* KMID          : KM62AEAI04
* Date          : 12-09-25
* Program       :14. Write a function to take an array as input, and count how many times 
the biggest number is repeated in that array,and return the count.
eg., array : {10, 14,16,10, 10 , 16, 14, 14, 16, 16};
output : biggest number is repeated 4 times

* Sample Input& Output :
*
Enter size of array:5
Enter elements:
12
3
4
5
12
Biggest number is 12
Biggest number is repeated 2 times
*************************************************/

#include <stdio.h>
/*
 *  @brief  : This function is used to search the maximum number 
 *  @Param1 : int n size
 *  @Param2 : int array1
 *	@retval : int - i 
 */

int max(int arr[],int n)
{
int i;//declare variable
int maximumvalue;//declare variable
maximumvalue=arr[0];
for (i=1;i<=(n-1);i++)
{
 if(maximumvalue<arr[i])
 {
  maximumvalue=arr[i];
 }
return maximumvalue;//return max value 
}
}

/*
 *  @brief  : This function is used to count  the repeated maximum number 
 *  @Param1 : int n size
 *  @Param2 : int m maximum number
 *  @Param2 : int array1
 *	@retval : int - i 
 */
int count(int arr[],int m,int n)
{


	int i,c=0;//declare variable
	for(i=0;i<n;i++)
	{
     if(m==arr[i])
	 {
	   	// printf("%d\n",arr[i]);
		 c=c+1;
	 }
	}
	// printf("%dc value\n",c);
	 return c;

}



int main()
{

  int i,n,m,c;//declare variables
  printf("Enter size of array:");//prompt to enter size of array
  scanf("%d",&n);//read size
  int arr[n];//declare array
  printf("Enter elements:\n");
  for (i=0;i<n;i++)
  {  
	  scanf("%d",&arr[i]);//read elements
  }
  m=max(arr,n);//function call to biggest number
  printf("Biggest number is %d\n",m);//print biggest number
  c=count(arr,m,n);//function call to count biggest number repeation
  printf("Biggest number is repeated %d times",c); //print count

    return 0;
}


