
/************************************************
* Name          : B sridhar sagar
* kmid          : km62aeai04
* Date          : 04-09-25
* Program       : 10.write the calculator program to read two numbers and one character (+, -, *, / , %) from the user, and based on character, do appropriate operations on numbers and print the output. Modify the program to repeat this task n number of times.
* Sample Input  :
Enter n number: 2
* Sample Output :
Enter two numbers:
5
4
Enter a character (+,-,*,/,%):
+
Result of 5 + 4 is 9
Enter two numbers:
4
3
Enter a character (+,-,*,/,%):
-
Result of 4 - 3 is 1
*
*************************************************/

#include<stdio.h>

int main()
{
	int a,b,ret,n;            //variable declaration
	char c;
	printf("Enter n no.of operations ");
	ret=scanf("%d",&n);            //Read the integer
	while(ret==0){                 //Not consider the integer then this loop will runs
		printf("Enter a valid integer ");
		while(getchar()!='\n');
		ret = scanf("%d",&n);
	}
	ret =scanf("%d",&a);             //Read the integer

	while(ret !=1){
		printf("Enter a valid integers and character \n");
		while(getchar()!='\n');
		ret =scanf("%d",&a);
	}
	while(n){                       //loop runs n times
		printf("Enter two integers and character ");
		ret=scanf("%d",&b);           //Read the integer
		while(ret !=1){
			printf("Enter a valid integers and character \n");
			while(getchar()!='\n');
			ret =scanf("%d",&b);
		}
		printf("Enter a character (+,-,*,/,%) \n");
		getchar();
		scanf(" %c",&c);                 //Read the character
		switch(c){                       // based on c switch runs
			case '+':
				printf("Result is %d + %d = %d",a,b,a+b);
				break;
			case '-':
				printf("Result is %d - %d = %d",a,b,a-b);
				break;
			case '*':
				printf("Result is %d * %d = %d",a,b,a*b);
				break;
			case '/':
				printf("Result is %d / %d = %d",a,b,a/b);
				break;
			case '%':switch(b==0){
						 case 1: printf("Not possible\n");
								 break;
						 case 0:printf("Result is %d %% %d = %d",a,b,a%b);
								break;
					 }
					 break;
			default:
					 printf("Not an operation");
					 break;
		}
		a=b;
		n--;
	}

    return 0;
}




