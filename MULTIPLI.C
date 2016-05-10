#include<stdio.h>
#include<conio.h>
void main()
{
	int i,sum=0,n;
	clrscr();
	printf("Enter the number");
	scanf("%d",&n);
	for(i=1;i<12;i++)
	{
		sum=n*i;
		printf("%d*%d=%d\n",n,i,sum);
	}
	getch();
}
