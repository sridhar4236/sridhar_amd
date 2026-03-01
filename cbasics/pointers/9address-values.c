/********************************************
* Name         : B SRIDHAR SAGAR
* KMID         : KM62AEAI04
* Date         : 18-09-25
* Program      :9. Declare an integer array of size 10 and initialize it to some values.
Print the addresses of each element of the array using a pointer.
using indirection operator , print the value stored in each element of the array.
* Sample Input  :
12
13
14
15
16
17
18
19
20
21
* Sample Output :
address0 =0x7ffe2f377870
value =12
address1 =0x7ffe2f377874
value =13
address2 =0x7ffe2f377878
value =14
address3 =0x7ffe2f37787c
value =15
address4 =0x7ffe2f377880
value =16
address5 =0x7ffe2f377884
value =17
address6 =0x7ffe2f377888
value =18
address7 =0x7ffe2f37788c
value =19
address8 =0x7ffe2f377890
value =20
address9 =0x7ffe2f377894
value =21


*
*************************************************/

#include <stdio.h>

int main()
{
 int i;//declare i variable
 int a[10];//declare array with size of 10
 for (i=0;i<10;i++)//loop to read values 
 {
   scanf("%d",&a[i]);//read element of array

 }
 int *p1=a;//base address of array store in pointer p1
 for (i=0;i<10;i++)//loop to print elements 
 {
   printf("address%d =%p\n",i,p1+i);//print addresses
   printf("value =%d\n",*(p1+i));//print elements

 }


    return 0;
}



