/********************************************
* Name         : B SRIDHAR SAGAR
* KMID         : KM62AEAI04
* Date         : 25-08-25
* Program      :
* sample Input :
* Sample Output:   
* 
***************************************************/

#include<stdio.h>

int main()
{

	int x=2,y,z=2,a=10,b;
//	x=8++;
//	z=++x;
//	a=x++;
//	y=++x*x++;
//	y=z++ + ++x;
//	x=4*(++x * 2 + 3);
//	z=4*(z++ * 2 + 3);
	z=++a;
	b= a-- * a--;

	
//	z=(x+y) --;
	printf("x=%d y=%d %d",b,z,a++ * a++);
	return 0;
} 

