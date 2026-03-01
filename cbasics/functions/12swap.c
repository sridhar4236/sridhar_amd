
/************************************************
* Name          : B sridhar sagar
* KMID          : KM62AEAI04
* Date          : 08-09-25
* Program       : 12. Write a function ,that can take two integers, swap their values and print their new values.
return type should be void. function should print the values.
* Sample Input  : 12 36
* Sample Output : 36 12
*
*************************************************/

#include <stdio.h>
/*
 *  @brief  : This function is used to swap values of two variables
 *  @Param1 : int a variable value
 *  @Param2 : int b variable value
 */
void  swap(int a,int b)
{
 int t;// declaration of t variable
 t=a;
 a=b;
 b=t;
 printf("a value %d \n",a);//print a value
 printf("b value %d \n",b);//print b value


}

int main()
{
  int a,b;// declaration of a,v variable
  printf("enter a value:\n");//prompt to enter a value
  scanf("%d",&a);//read input a
  printf("enter b value:\n");//prompt to enter b value
  scanf("%d",&b);//read input b
  swap(a,b);//function call to swap values of two variables
    return 0;
}


