/********************************************
* Name         : B SRIDHAR SAGAR
* KMID         : KM62AEAI04
* Date         : 18-09-25
* Program      :6. Declare different pointers with different data types.
Print the sizes of the pointer variables using sizeof operator. 
Why do u think all of them are giving same size irrespective of the data type ?
* Sample Input  :
* Sample Output :
Size of int:8
Size of char:8
Size of float:8
Size of double:8

*
*************************************************/

#include <stdio.h>

int main()
{
	int *p1=0;//declare integer pointer variable
	char *p2=0;//declare char  pointer variable
	float *p3=0;//declare float pointer variable
    double *p4=0;//declare double pointer variable
	printf("Size of int:%ld\n",sizeof(p1));//size of integer pointer
	printf("Size of char:%ld\n",sizeof(p2));//size of char  pointer
    printf("Size of float:%ld\n",sizeof(p3));//size of float pointer
	printf("Size of double:%ld\n",sizeof(p4));//size of double pointer




    return 0;
}



