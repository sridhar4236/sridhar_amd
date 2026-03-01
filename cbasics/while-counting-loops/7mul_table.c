
/************************************************
* Name          : B sridhar sagar
* kmid          : km62aeai04
* Date          : 04-08-25
* Program       :7.Read a number from the user, and print its multiplication table upto 10 multiples.
Example:
Enter n number: 2
Enter x number: 2
2*1 =2
2*2 =4
2*3 =6
2*4 =8
2*5 =10
2*6 =12
2*7 =14
2*8 =16
2*9 =18
2*10 =20
Enter x number: 5
5*1 =5
5*2 =10
5*3 =15
5*4 =20
5*5 =25
5*6 =30
5*7 =35
5*8 =40
5*9 =45
5*10 =50


* Sample Input  :
* Sample Output :
*
*************************************************/

#include<stdio.h>

int main()
{
	int i=1,j=1,n,x,mul;
	printf("enter the n number");
	scanf("%d",&n);
	while(j<=n)
	{
		i=1;
		printf("enter the x number");
		if(i==1)
		{
			scanf("%d",&x);
		}
		while(i<=10)
		{
			mul=i*x;
			printf("%d*%d=%d\n",x,i,mul);
			i++;
		}
		j++;
	}
	
	

    return 0;
}

