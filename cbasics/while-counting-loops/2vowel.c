

/************************************************
* Name          : B sridhar sagar
* kmid          : km62aeai04
* Date          : 04-09-25
* Program       : 2.Read a n no.of characters and print wheather the character it is vowel or not.
* Sample Input  : 2   b    a
* Sample Output : b is not a vowel
                  a is a vowel
            
*
*************************************************/

#include<stdio.h>

int main()
{
	int n;                        //variable declaration
	printf("Enter n no.of character: ");
	scanf("%d",&n);                //Read the variable
	int i=1;                       //variable declaration and initialization
	char c;                        //variable declaration
	while(i<=n){                    //loop runs n times
		printf("Enter character %d\n",i);
		getchar();                  //reads the character
		scanf("%c",&c);
		while(!((c>='A' && c<='Z') || (c>='a' && c<='z'))){  //input validation
			printf("Enter valid character\n");
			scanf(" %c",&c);
		}
		switch(c){                     //checks the switch cases wheather it is vowel or not
			case 'a':
			case 'e': 
			case 'i':
			case 'o':
			case 'u':
			case 'A':
			case 'E':
			case 'I':
			case 'O':
			case 'U': printf("Given character %c is vowel\n",c);
					  break;
			default:
					  printf("Given character %c is not vowel\n",c);
		}
		i++;
		//n--;
	}
    return 0;
}



