#include<stdio.h>
#include<conio.h>
void main()
{
	int  n,i;
	long sum=1;
	clrscr();
	printf("Enter the number");
	scanf("%d",&n);
	for(i=n;i>1;i--)
	{
		sum=sum*i;
	}
	printf("%ld",sum);
	getch();
}