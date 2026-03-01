
/************************************************
* Name          : B sridhar sagar
* KMID          : KM62AEAI04
* Date          : 11-09-25
* Program       

12. Write an neg_to_pos function to modify the array such that all negative numbers are converted to positive.

void neg_to_pos ( int arr[] , int n);

* Sample Input  :
Enter size of array:4
Enter elments
-12
-12
23
45

* Sample Output :
elements are:-12 -12 23 45

After change:12 12 23 45

*
*************************************************/

#include <stdio.h>
void negtopos(int arr[],int n)
{
 int i;
 for(i=0;i<n;i++)
 { 
	 if(arr[i]<0)
	 {
		 arr[i]=-1*arr[i];
	 }
 }

 }

int main()
{
	int n,i;
	printf("Enter size of array:");
	scanf("%d",&n);
	int arr[n];
    printf("Enter elments\n");
    for(i=0;i<n;i++)
	{
   	    scanf("%d",&arr[i]);
	}
	printf("elements are:");
    for(i=0;i<n;i++)
	{

		printf("%d ",arr[i]);
	}
	printf("\n");
    negtopos(arr,n);
	printf("\n");
	printf("After change:");
    for(i=0;i<n;i++)
	{

		printf("%d ",arr[i]);
	}


    return 0;
}


