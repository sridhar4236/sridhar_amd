
/************************************************
* Name          : B sridhar sagar
* KMID          : KM62AEAI04
* Date          : 11-09-25
* Program       :


5. Write the following program.
Declare an integer variable ‘size’.
Take the value of ‘size’ from user using scanf.
Declare an array of any datatype, and give the integer variable ‘size’, in place of size of the array  and initialize it to some values.(syntax: float array[size] = {1.0,2.5};)
Using for loop, try to take user input using scanf. Loop should execute ‘size’ number of times.
Using for loop, print the elements of the array.



* Sample Input  :
* Sample Output :
The size of array:4
Enter elments
12
23
45
66
elements are:12 23 45 66
*************************************************/

#include <stdio.h>

int main()
{
	int size,i;//declare  variables
	printf("The size of array:");//prompt to enter size of array
	scanf("%d",&size);//read array sizs
	int arr[size];//declare int array
    printf("Enter elments\n");//prompt to enter elements
    for(i=0;i<size;i++)
	{  
   	    scanf("%d",&arr[i]);//read elements
	}
	printf("elements are:");
    for(i=0;i<size;i++)
	{
   	 
		printf("%d ",arr[i]);//print elements
	}






    return 0;
}

