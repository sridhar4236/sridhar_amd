

/************************************************
* Name          : B sridhar sagar
* kmid          : km62aeai04
* Date          : 04-08-25
* Program       :3. Read n characters from user and print if each character is a capital alphabet, small alphabet, numeric character  or special character
* Sample Input  :Enter n characters: 3
Enter a character:  b
The given character 'b' is a small alphabet.
Enter a character:  ?
           The given character '? ' is a special character.
Enter a character:  B
           The Giiven character 'B ' is a Capital alphabet.
* Sample Output :
*
*************************************************/

#include<stdio.h>

int main()
{ 
	int n,i=1 ;
	char ch;
	printf("enter the n value");
	scanf("%d",&n);
	while(i<=n)
	{
		printf("enter a character %d\n",i);
		scanf(" %c",&ch);
		switch(ch)
		{
			case 97 ... 122:printf("the given character %c is small alphabet\n",ch);
							 break;
			case 65 ... 90:printf("the given character %c is capital alphabet\n",ch);
							 break;
			case 58 ... 64:printf("the given character %c is the spicial character\n",ch);
							   break;
			case 33 ... 47:printf("the given character %c is the special character\n",ch);
							   break;
			case 48 ... 57:printf("the given character %c is the numeric character\n",ch);
						   break;
			default:printf("you are in danger go to home");
		}
		i++;
}


    return 0;
}


