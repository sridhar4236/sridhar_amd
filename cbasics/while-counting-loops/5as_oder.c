
/************************************************
* Name          : B sridhar sagar
* kmid          : km62aeai04
* Date          : 04-08-25
* Program       :5.Read n numbers in ascending order. If a number entered is bigger than the previous number, then count it. If it is smaller, then don't count it, instead let the loop repeat itself and read another number.
Example:
Enter n number: 5
Enter 5 numbers:
3
4
2
6
8
           The count is 3
* Sample Input  :
* Sample Output :
*
*************************************************/

#include<stdio.h>

int main()
{
	int count=0,a,b,n,i=1;
    printf("enter the n  numbers");
    scanf("%d",&n);
	while(i<n)
	{
		if (i==1)
		{
		scanf("%d",&a);
		}
		scanf("%d",&b);
		if (a<b)
		{
			count=count+1;
		}
		a=b;

		i++;
	}
		printf(" count is %d",count);

    return 0;
}

