#include<stdio.h>
int func();
int func1();
int x=1;
int main() 
{
 
		printf("%d\n%p\n",x,&x);
	x=2;
	printf("%d\n%p\n",x,&x);
	func();
	func1();
		printf("%d\n%p\n",x,&x);

	return 0;

}

func ()
{
	x++;
	printf("func:%d\n%p\n",x,&x);

}

