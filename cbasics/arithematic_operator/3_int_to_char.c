/********************************************
* Name         : B SRIDHAR SAGAR
* KMID         : KM62AEAI04
* Date         : 02-10-25
*  Program       :take three integer input x,y,z,write a program to rotate their values such x has of y,y has the value of z,and z has the value of x
* Sample Input  :x=4,y=5,z=6
* Sample Output :x=5,y=6,z=4

* 
***************************************************/

#include<stdio.h>
int main()

{
int x,y,z;
printf("enter x y z values");
scanf("%d%d%d",&x,&y,&z);
x=x+y+z;
z=(x-y)-z;
y=(x-y)-z;
x=(x-y)-z;
printf("numbers after rotating x:%d y:%d z:%d",x,y,z);
return 0;
}
