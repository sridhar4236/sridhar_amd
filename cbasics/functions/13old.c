
/************************************************
* Name          : B sridhar sagar
* KMID          : KM62AEAI04
* Date          : 08-09-25
* Program       :13.Write a function that takes 2 dates as inputs, and returns 1 
if the first date is old, 2 if the second date is old.
* Sample Input  : 01-09-2003 06-01-2005
* Sample Output :first date is old
*
*************************************************/

#include <stdio.h>
int dob(int y1,int y2,int m1,int m2,int d1,int d2);//function declaration 

int main()
{
        int y1,y2,m1,m2,d1,d2,r;// declaration of y1,y2,m1,m2,d1,d2 variables
        printf(" Enter first date:\n");//prompt to enter first date
        scanf("%d-%d-%d",&d1,&m1,&y1);//read input d1,m1,y1
        printf(" Enter second date:\n");//prompt to enter second date
        scanf("%d-%d-%d",&d2,&m2,&y2);//read input d2,m2,y2
        r=dob(y1,y2,m1,m2,d1,d2);//function call to find elder date 
        if (r==1)
        printf("first date is old");//first  date is elder
        else if(r==2)
        printf("second date is old");//second date is elder
		else if(r==0)
        printf("both dates are same");//both dates are same.

    return 0;
}

/*
 *  @brief  : This function is used to find elder of both dates  returns 1 or 2 or 0
 *  @Parameters: int y1 year,int y2 year,int m1 month,int m2 month,int d1 date,int d2 date.
 *  @retval : int 1-first is old ,2- second is old,0- both are same.
 */


int dob(int y1,int y2,int m1,int m2,int d1,int d2)
{
    
    
            if(y2<y1)
            {
                return 2;//second date is elder
            }
             else if(y1>y2)
            {
                return 1;//first  date is elder
            }
            
            else if(y1=y2)
            {
                if(m2<m1)
                {
                    return 2;//second date is elder
                }
                if(m1<m2)
                {
                    return 1;//first  date is elder
                }
                else if(m1=m2)
                {
                    if(d2<d1)
                    {
                         return 2;//second date is elder
                    }	 
                     else if(d1>d2)
                    {
                         return 1;//first  date is elder
                    }	
                    else
                     {
                     return 0;//both dates are same.

                     }
                    
                }
            }
            
            

  
        
    }

