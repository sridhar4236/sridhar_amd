
/************************************************
* Name          : B sridhar sagar
* kmid          : km62aeai04
* Date          : 04-08-25
* Program       : Read n numbers from the user, and while reading every number, print if the number is bigger or smaller than the previous number. For the first number, there won't be any output as it is the first one.
Example:
Enter n number: 3
5
6
           The given number is bigger than the previous number.
2
           The given number is smaller than the previous number
 Sample Input  :
* Sample Output :
*
*************************************************/

#include<stdio.h>

int main()
{
	int n,i=1;
	int a,b,;
	printf("enter the n number");
	scanf("%d",&n);
	while(i<n)
	{
		if(i==1)
		{
		printf("enter the number");
		scanf("%d",&a);
		}
		printf("enter the number ");
		scanf("%d",&b);
		if(a<b)
		{
			printf("the given number is bigger than the previous number");
		
		}
		
		else
		{
			printf("the first number is bigger than the second number");

		}

			a=b;
			i++;
		
		
	}	
    return 0;
}


