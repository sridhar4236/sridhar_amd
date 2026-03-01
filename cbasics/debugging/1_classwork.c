/********************************************
* Name         : B SRIDHAR SAGAR
* KMID         : KM62AEAI04
* Date         : 06-10-25
* Program      :
* sample Input :
* Sample Output:   
* 
***************************************************/

#include<stdio.h>

int main()
{
	 int n,num,a;
	int x,i,c=0,c_=0,y;
	printf("enter num");
	scanf("%x",&num);
	printf("enter pattern");
	scanf("%x",&a);
	n=a;
	while(a)
	{
		a=a/2;
		c++;
	}
	x=~(~0<<c);
	for(i=0;i<=(32-c);i++)
	{
		y=num&x;
		if(y==n)
		{
			printf("%d",i);
		c_++;}
		num=num>>i;
	}
	printf("%d\n",c_);
	return 0;
} 

