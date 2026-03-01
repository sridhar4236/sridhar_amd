
/************************************************
* Name          : B sridhar sagar
* KMID          : KM62AEAI04
* Date          : 11-09-25
* Program       :
9. Write a program to print an integer in binary format using arrays.
* Sample Input  :12
* Sample Output :Binary format of 12 is :1 1 0 0
*
*************************************************/

#include <stdio.h>

int main()
{

int n,i,j,num,rem;//declare variables
	int arr[32];//declare array with 32 size
    printf("Enter the integer\n");//prompt to enter input digit
	scanf("%d",&n);//read input
	i=0;//i value initialize with 0
	num=n;//store n value in num variable
    while(num>0)//loop iterates until num value becomes 0
	{
   	    rem=num%2;//do modulus operation of num by 2 and store in rem variable
		num=num/2;//do divison of num by 2 and store result in num variable
		arr[i]=rem;//store rem value in arr[i]
		i++;// i  value incremented by 1
	}
	printf("Binary format of %d is :",n);//message to print the binary format of given integer
    for(j=i-1;j>=0;j--)
	{

     	printf("%d ",arr[j]);//print result
	}


    return 0;
}


