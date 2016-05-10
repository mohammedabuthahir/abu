#include<stdio.h>
#include<string.h>
void main()
{
	char string[20];
	int length=0,i,j,k=0,c;
	clrscr();
	printf("Enter the String\n");
	scanf("%s ",string);
	for(i=0;string[i]!='\0';i++)
	{
		length++;
	}
	c=(length-1)/2;
	for(j=0;j<=c;j++)
	{
		if(string[j]!=string[length-j-1])
		{
			 k=1;
			 break;
		}
	}
	if(k==1)
	{
	printf("the string is not an palindrome");
	}
	else
	{
		printf("the string is an palindrome");
}getch();
       }
