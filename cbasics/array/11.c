
/************************************************
* Name          : B sridhar sagar
* KMID          : KM62AEAI04
* Date          : 12-09-25
* Program       :

11. Write an average function to return the average of marks of all students in a class. 
 
float average( int arr[] , int n, int s); 
arr[] contains the number of subjects.
Where 'n' is the number of students and 's' is the number of subjects. 

* Sample Input&Output :
Enter no of students:2
Enter no. of subjects:3
Enter student 1 marks:
76
78
98
Average of marks of student 1 is 84.000000
Enter student 2 marks:
45
67
98
Average of marks of student 2 is 70.000000

Total average of class is: 77.000000

 
*************************************************/

#include <stdio.h>
float  allavg;//gloabal variable
/*
 *  @brief  : This function is used to search the element 
 *  @Param1 : int s students
 *  @Param2 : int array
 *	@retval : float avg- i 
 */
float  average(int arr[],int s)
{
 int i,avg=0;//declare variables
 for(i=0;i<s;i++)
 {
	 avg=avg+arr[i];
 }
avg=avg/s;
allavg=allavg+avg;
  return avg;//result
 }

int main()
{
	int n,s,i,j;//declare variables
	printf("Enter no of students:");//prompt to enter no of students
	scanf("%d",&n);//read input 
	printf("Enter no. of subjects:");//prompt to enter subjects no
	scanf("%d",&s);//read input
	int arr[s];//declare array
    for(i=1;i<=n;i++)
	{
   	 
     	printf("Enter student %d marks:\n",i);////prompt to enter marks
    for(j=0;j<s;j++)
	{

     scanf("%d",&arr[j]);//read marks
	}
	printf("Average of marks of student %d is %f\n",i,average(arr,s));//print average marks 
	}
	printf("\n");
	printf("Total average of class is: %f",allavg/n);//print average of class


    return 0;
}


