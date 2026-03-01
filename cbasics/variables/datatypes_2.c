/********************************************
* Name         : B SRIDHAR SAGAR
* KMID         : KM62AEAI04
* Date         : 02-10-25
* Program      : data types
* sample Input :
* Sample Output:   
* 
***************************************************/
#include<stdio.h>
int main()
  {
      signed int a;
    unsigned int b;
   short int c;
     unsigned short int d;
      long int e;
      unsigned long int f;
      float g;
      double h;
      long double i;
       signed char j;
       unsigned char k;
  
     printf("Enter the variables\n");
    
       scanf("%d%u%hd%hu%ld%lu%f%lf%LF%c%c",&a,&b,&c,&d,&e,&f,&g,&h,&i,&j,&k);
     printf("%d%u%hd%hu%ld%lu%f%lf%LF%c%c",a,b,c,d,e,f,g,h,i,j,k);
     return 0;
   }


