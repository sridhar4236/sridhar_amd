
/************************************************
* Name          : B sridhar sagar
* kmid          : km62aeai04
* Date          : 04-08-25
* Program       :8.For n students from a class, read 6 subject marks for every student, and calculate their percentage of marks, and print who is the topper of all (print the student number).
Example:
Enter n students: 2
Enter 1st student 6 subjects marks:
40
50
45
75
60
55
Student 1 percentage is: 54.16%
Enter 2nd student 6 subjects marks:
45
65
55
80
40
55
Student 2 percentage is: 56.66%
Topper student ID is 2
* Sample Input  :
* Sample Output :
*
*************************************************/

#include<stdio.h>

int main()
{
	int n,i=1;
	int a,b,c,d,e,f,avr1,avr2;
	printf("enter number of student");
	scanf("%d",&n);
	printf("enter 6 subjects marks");
	scanf("%d\n%d\n%d\n%d\n%d\n%d\n",&a,&b,&c,&d,&e,&f);
	avr1=((a+b+c+d+e+f)/6);
	while(i<=n)
	{
		if(i==1)
		{
			printf("enter 6 subjects");
			scanf("%d\n%d\n%d\n%d\n%d\n%d\n",&a,&b,&c,&d,&e,&f);
			avr2=((a+b+c+d+e+f)/6);



    return 0;
}


