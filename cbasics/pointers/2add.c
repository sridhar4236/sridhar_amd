/********************************************
* Name         : B SRIDHAR SAGAR
* KMID         : KM62AEAI04
* Date         : 18-09-25
* Program      :2. Write a program to add two variables using their pointers.
* Sample Input  :12 14
* Sample Output :result=26

* 
***************************************************/

#include <stdio.h>

int main()
{

int a,b;//declare variable a,b
printf("enter values: ");//prompt to enter values
scanf("%d%d",&a,&b);//read inputs
int c;//declare c variable
int *p1=&a;//store address of a in p1
int *p2=&b;//store address of b in p2
int *p3=&c;//store address of c in p3
*p3=*p1+*p2;//c=a+b
printf("Result:%d",*p3);//print result a+b

    return 0;
}



