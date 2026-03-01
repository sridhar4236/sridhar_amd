
/************************************************
* Name          : B sridhar sagar
* kmid          : km62aeai04
* Date          : 04-09-25
* Program       :Read two numbers from the user, and print all numbers in reverse order.
* Sample Input  : 10   20
* Sample Output :20 19 18 17 16 15 14 13 12 11 10
*************************************************/

#include<stdio.h>

int main()
{
    int a,b,i;          //variable declaration
	printf("Enter two numbers ");
	int ret=scanf("%d%d",&a,&b);      //Read the integers
	while(ret !=2){                   //Not read integers then this loop runs
		printf("Enter valid integer ");
		while(getchar()!='\n');
		ret=scanf("%d%d",&a,&b);
	}
	for(i=b;i>=a;i--){             //in range reverse order numbers are printed
		printf("%d ",i);
	}
    return 0;
}




