#include<stdio.h>

static int x;
int fun1()
{
	x++;
	printf("fun1:%d%p\n,x,&x");
}

