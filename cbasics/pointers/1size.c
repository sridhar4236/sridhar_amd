/********************************************
* Name         : B SRIDHAR SAGAR
* KMID         : KM62AEAI04
* Date         : 18-09-25
* Program      :Write a program to print the address of a variable , its value ,its size,
try different executions and note the address printed.
Assign the address of the variable to a pointer variable.Print the size of pointer and its indirected value (apply * operator):
* Sample Input &  Output :
address of x= 0x7ffcdfc8005c
size of x=4
Value =100
address of pointer= 0x7ffcdfc8005c
size of p1=8
Value =100

***************************************************/
#include <stdio.h>

int main()
{

int x=100;//declare and initialize variable with 100
printf("address of x= %p\n",&x);//address of x variable
printf("size of x=%ld\n",sizeof(x));//size of x variable
printf("Value =%d\n",x);//x value
int *p1=&x;//declare pointer and store address of x in p1
printf("address of pointer= %p\n",p1);//address of p1
printf("size of p1=%ld\n",sizeof(p1));//size of p1
printf("Value =%d\n",*p1);//value of x



    return 0;
}



