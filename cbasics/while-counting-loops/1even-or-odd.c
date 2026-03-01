/************************************************
* Name          : B sridhar sagar
* kmid          : km62aeai04
* Date          : 04-09-25
* Program       : 1.even or odd
* Sample Input  :
* Sample Output :
*Enter n numbers:5
ENter num 1: 2
       2 is even number
enter num 2: 3
        3 is odd number
enter num 3: -
error!enter integers
enter num 3:4
4 is even number
*************************************************/

#include<stdio.h>

int main()
{
	int n,i=1,num,ret;
	printf("Enter n numbers:");//taking n numbers
	scanf("%d",&n);
	printf("Entered number is: %d\n",n);
	while(i<=n)
	{
		printf("enter num %d :",i);
		ret=scanf("%d",&num);
	   	printf("entered num is %d\n",num);//debugging
		while(ret==0)
		{
			while(getchar()!='\n');//clearing buffer 
			printf("error! enter integers only\n");
			printf("entered  num is %d\n",num);
			ret=scanf("%d",&num);
		}
		if(num%2==0)
			printf("%d is even number\n",num);
		else if(num%2==1)
			printf("%d is odd number\n",num);
		i++;

	}
	printf("\n");


    return 0;
}

