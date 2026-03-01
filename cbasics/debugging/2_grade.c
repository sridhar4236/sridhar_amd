/********************************************
* Name         : B SRIDHAR SAGAR
* KMID         : KM62AEAI04
* Date         : 08-10-25
* Program      :
* sample Input :
* Sample Output:   
* 
***************************************************/
#include <stdio.h>

int main()
{
    int tm=600;  //initializing an integer
	float tel,hin,eng,math,sci,soc;  //declaring six floating variables
	printf("Please enter the marks obtained in each subject\n");
	scanf("%f%f%f%f%f%f",&tel,&hin,&eng,&math,&sci,&soc); //taking input from the user
	printf("Marks obtained in Telugu=%f\nMarks obtained in Hindi=%f\nMarks obtained in English=%f\nMarks obtained in Maths=%f\nMarks obtained in Science=%f\nMarks obtained in Social=%f\n",tel,hin,eng,math,sci,soc);
	
	float add_marks=tel+hin+eng+math+sci+soc;  //adding all six floating variables and storing in add_marks

	float per=(add_marks/tm)*100;  //dividing add_marks by tm and multiplied by 100 and storing in per

	if(per>=80 && per<=100)  //checking if condition
	{
		printf("You are honoured with %f percentage",per);
	}

	else if(per>=60 && per<80)  //checking else if condition
	{
		printf("You are in first division with %f percentage",per);
	}

	else if(per>=50 && per<60)  //checking else if condition
	{
		printf("You are in second division with %f percentage",per);
	}

	else if(per>=40 && per<50)  //checking else if condition
	{
		printf("You are in third division with %f percentage",per);
	}

	else  //if all fail this will print
	{
		printf("You are failed because you got %f percentage",per);
	}


    return 0;
}





