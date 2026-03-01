/********************************************
* Name         : B SRIDHAR SAGAR
* KMID         : KM62AEAI04
* Date         : 18-09-25
* Program      :8. Take three input integers x,y and z. Write a program to rotate their values such that,
x has the value of y,
y hasthe value of z and
z has the value of x
. Do this using pointers that point to x,y and z.
* Sample Input  :Enter x,y,z values :10 20 30
* Sample Output :x=20 y=30 z=10
*
*************************************************/

#include <stdio.h>

int main()
{

	int x,y,z;//declare three variable x,y,z
	printf("Enter x,y,z values :");//prompt to enter values
	scanf("%d%d%d",&x,&y,&z);//read values
	int *p1=&x;//declare pointer variable p1
	int *p2=&y;//declare pointer variable p2
	int *p3=&z;//declare pointer variable p3
	*p1=*p1+*p2+*p3;//z=x+y+z
	*p3=(*p1-*p2)-*p3;//z=(x-y)-z
	*p2=(*p1-*p2)-*p3;//y=(x-y)-z
    *p1=(*p1-*p2)-*p3;//x=(x-y)-z
	printf("x=%d y=%d z=%d",*p1,*p2,*p3);//print values


    return 0;
}



