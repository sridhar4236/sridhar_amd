/********************************************
* Name         : B SRIDHAR SAGAR
* KMID         : KM62AEAI04
* Date         : 26-08-25
* Program      :Leap year or not
* Sample Input  : 2024
* Sample Output : Leap year


***************************************************/

#include<stdio.h>

int main()
{

	int y;
	scanf("%d",&y);
	//	a>b?printf("%d is greater",a):printf("%d is greater",b);
	(y%100==0)?((y%400==0)?printf("%d is leap year",y):printf("%d not leap",y)):((y%4==0)?(printf("%d is leap year",y)):printf("%d is not leap year",y));
	//	printf("%d is greater",big);
	return 0;
} 

