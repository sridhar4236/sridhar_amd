
/************************************************
* Name          : B sridhar sagar
* kmid          : km62aeai04
* Date          : 04-09-25
* Program       : 11.Read two numbers from the user, and print all odd numbers between those numbers and then all even numbers.
* Sample Input  :
eg., inputs: 10   20
* Sample Output :
even numbers: 10 12 14 16 18 20
odd numbers: 11 13 15 17 19
*
*************************************************/

#include<stdio.h>

int main()
{
	int a,b,i;                //variable declaration
	printf("Enter two numbers ");
	int ret=scanf("%d%d",&a,&b);      //Read the 2 integers
	while(ret !=2){
		printf("Enter valid integers ");
		while(getchar()!='\n');
		ret=scanf("%d%d",&a,&b);
	}

	printf("Even number: ");
	for(i=a;i<=b;i++){                //in range even numbers are printed 
		if(i%2==0){
			printf("%d ",i);
		}
		
	}
	printf("\n");

	printf("Odd number: ");
	for(i=a;i<=b;i++){                 //in range odd numbers are printed
		if(i%2==1){
			printf("%d ",i);
		}
		
	}
	printf("\n");
    return 0;
}


