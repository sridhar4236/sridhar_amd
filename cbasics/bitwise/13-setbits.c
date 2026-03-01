/********************************************
* Name         : B SRIDHAR SAGAR
* KMID         : KM62AEAI04
* Date         : 02-10-25
* Program      :13. Write a functionsetbits(x,p,n,y)that return x with then bits that begin 
at position p set to the rightmost n bits of y, leaving the other bits unchanged.

    e.g. if x = 10101010 (170 decimal) and y = 10100111 (167 decimal) and n = 3 and p = 6 then
    you need to strip off 3 bits of y (111) and put them in x at position 10xxx010 to get answer
    10111010. Your answer should print out the result in binary form although input can be in
    decimal form.
    Your output should be like this:
    x = 10101010 (binary)
    y = 10100111 (binary)
    setbits n = 3, p = 6 gives x = 10111010 (binary).


* Sample Input  :
* Sample Output :
*
*************************************************/


#include <stdio.h>
int main()
{
    unsigned short int x, t,y,mask;
    int p, n;
    printf("Enter x value:");
	scanf("%x",&x);
//	printf("x= %b\n",x);
	printf("Enter y value:");
	scanf("%x",&y);
//	printf("y= %b\n",y);
    printf("Enter Position: " );
    scanf("%d",&p);
    printf("Enter Set Bits: ");
	scanf("%d",&n);
    mask= (~(~(~0 << n) << (p-n+1)));
//	printf("mask=%x\n",mask);
	t= (((~(~0 << n)) &y ) << (p-n+1)) ;
//	printf("t=%x\n",t);
	x= (x & mask) |t;
//	printf("x=%x\n",x&mask);
	printf("x=%x\n",x);
    return 0;
}

