
/************************************************
* Name          : B sridhar sagar
* kmid          : km62aeai04
* Date          : 04-09-25
* Program       : 9.Read two numbers from the user, and print all serial numbers between those numbers.
* Sample Input  :
eg., inputs: 10   20
* Sample Output :
*
output: 10 11 12 13 14 15 16 17 18 19 20
*************************************************/

#include<stdio.h>

int main()
{
	int a,b;                   //variable declaration
	printf("Enter two integers ");
	while(scanf("%d%d",&a,&b)!=2){     //read the integer
		printf("enter valid integers ");
		while(getchar()!='\n');
		scanf("%d%d",&a,&b);
	}
	int i;                             //variable declaration
	for(i=a;i<=b;i++){                 // from a to b loop will runs
		printf("%d ",i);
	}
    return 0;
}


