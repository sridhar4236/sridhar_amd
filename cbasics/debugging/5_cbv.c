/********************************************
* Name         : B SRIDHAR SAGAR
* KMID         : KM62AEAI04
* Date         : 08-10-25
* Program      :
* sample Input :
* Sample Output:   
* 
***************************************************/
 #include<stdio.h>
int swap(int *,int *,int *);
int main()
{
	int a,b,c;
	printf("enter a b c values");
	scanf("%d%d%d",&a,&b,&c);
	swap(&a,&b,&c);
	printf("a=%db=%dc=%d",a,b,c);

    return 0;
}
int swap(int *a,int *b,int *c)
{
	int temp;
	temp=*c;
	*c=*b;
	*b=*a;
	*a=temp;
}
