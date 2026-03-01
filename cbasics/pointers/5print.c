nt /********************************************
* Name         : B SRIDHAR SAGAR
* KMID         : KM62AEAI04
* Date         : 18-09-25
* Program      :5. Declare 3 pointer variables of integer type, and an integer variable.
Assign the address of integer variable to the 3 pointers.
Print the variable value using indirection on each pointer variable. 
Change the variable value directly and check the values of each of the pointers using indirection.
Change the variable value , using each pointer and print the variable value and indirected values of all pointers every time you change.
* Sample Input & Output :
Enter value :10
10 10 10
enter  value by p1: 20
20 20 20 20
enter  value by p2: 30
30 30 30 30
enter  value by p3: 40
40 40 40 40

*
*************************************************/

#include <stdio.h>

int main()
{

	int a;//declare integer variable
	printf("Enter value :");//prompt to enter values
	scanf("%d",&a);//read input
	int *p1=&a;//declare integer pointer1 variable
	int *p2=&a;//declare integer pointer2 variable
	int *p3=&a;//declare integer pointer3 variable
	printf("%d %d %d\n",*p1,*p2,*p3);//print values
	printf("enter  value by p1: ");
	scanf("%d",p1);//read input
	printf("%d %d %d %d\n",a,*p1,*p2,*p3);//print values
	printf("enter  value by p2: ");
	scanf("%d",p2);//read input
	printf("%d %d %d %d\n",a,*p1,*p2,*p3);//print values
   	printf("enter  value by p3: ");
	scanf("%d",p3);//read input
	printf("%d %d %d %d\n",a,*p1,*p2,*p3);//print values




    return 0;
}



