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

	int u;
	printf("enter units");
	scanf("%d",&u);
	if(u<=200)
		printf("cost:%d\t rupess",100);
	
		if (u>=201 && u<=400)
		printf("cost:%.2f\trupees\n",100+((u-200)*0.65));
		else if(u>=401 && u<=600)
		printf("cost:%.2f\trupees\n",230+((u-400)*0.80));
	
		else	if(u>=601)
		printf("cost:%.2f\trupees\n",390+((u-600)*1.0));
		else
			printf("8");
	return 0;
} 

