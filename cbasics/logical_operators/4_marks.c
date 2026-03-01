/********************************************
* Name         : B SRIDHAR SAGAR
* KMID         : KM62AEAI04
* Date         : 27-08-25
* Program      :
* sample Input :
* Sample Output:   
* 
***************************************************/

#include<stdio.h>

int main()
{

	float m1,m2,m3,m4,t,p;
	printf("enter marks of 4 subjects");
	scanf("%f%f%f%f",&m1,&m2,&m3,&m4);
	t=m1+m2+m3+m4;
	p=t/4;
//	printf("%f",p);
	if(p>=80)
		printf("percentage:%f\thonour",p);
	
		if (p>=79 && p<=60)
		printf("percentage:%f\tfirst class",p);

		if (p>=59 && p<=50)
			printf("percentage:%f\tsecond class",p);
	 
		if (p>=49 && p<=40)
		printf("percentage:%f\tthird class",p);
	
		if(p<=39)
		printf("percentage:%f\tfail",p);
		

	return 0;
} 

