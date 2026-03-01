 #include<stdio.h>
func();
int x;
int main()
 
{
	
	x=2;
	printf("%d\n%d\n",x,&x);
	func();
	
		printf("%d\n%d\n",x,&x);

	return 0;

}
func ()
{
	x++;
	printf("func:%d\n%d\n",x,&x);

}
