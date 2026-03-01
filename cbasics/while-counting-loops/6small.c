
/************************************************
* Name          : B sridhar sagar
* kmid          : km62aeai04
* Date          : 04-08-25
* Program       :6.Read  n numbers from the user ,and print the smallest number of all.
Example:
Enter n number: 5
Enter 5 numbers:
3
4
2
6
8
           The smallest number is 2.
* Sample Input  :
* Sample Output :
*
*************************************************/

#include<stdio.h>

int main()
{
	int a,b,n,i=1,small=0;
	printf("enter the n value");
	scanf("%d",&n);
	while(i<n)
	{
		if(i==1)
		{
			scanf("%d",&a);
		}
		scanf("%d",&b);
		if(a<b)
		{
			small=a;
		}
		else 
		{
			a=b;
		}
		i++;
       
	}
     printf("smallest number %d",small);
    return 0;
}

