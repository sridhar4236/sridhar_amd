
/************************************************
* Name          : B sridhar sagar
* KMID          : KM62AEAI04
* Date          : 11-09-25
* Program       :3. Declare an array of size 10. Enter 10 elements and save them in the array. Print the array . Find out the biggest and smallest numbers and their indexes and print.
* Sample  Input & Output i:
The biggest number 20 and index no:7
The smallest number 1 and index no:8

*
*************************************************/

#include <stdio.h>

int main()
{
	int i,small,big,maxind,minind;//declare  variables
	maxind=0;
	minind=0;
	int arr[10]={5,6,8,3,9,10,3,20,1,5};//initialize int  array
	small=arr[0];
	for(i=1;i<=9;i++)
	{  
	   if(small>arr[i])
	   {
		   small=arr[i];//store smallest element
		   minind=i;
	   }
	}
	big=arr[0];
    for(i=1;i<=9;i++)
	{  
   	if(big<arr[i])
     	{
	    	big=arr[i];//store biggest element
	    	maxind=i;
     	}
	}

   printf("The biggest number %d and index no:%d\n",big,maxind);//print biggest number
   printf("The smallest number %d and index no:%d\n",small,minind);//print smallest number
  

    return 0;
}


