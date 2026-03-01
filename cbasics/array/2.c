
/************************************************
* Name          : B sridhar sagar
* KMID          : KM62AEAI04
* Date          : 11-09-25
* Program       :2. Write the following program :
Declare a character array without size.
Initialize the array with characters of your name.
Print your name using for loop.
* Sample Input  :
* Sample Output :
p a v a n g o u d
*************************************************/

#include <stdio.h>

int main()
{
int i,l;//declare i,l variable
	char name[]={'s','r','i','d','h','a','r'};//initialize char array
	l=sizeof(name);//find size of array
	for(i=0;i<l;i++)
	{  
		printf("%c ",name[i]);//print elements
	}
	

    return 0;
}

