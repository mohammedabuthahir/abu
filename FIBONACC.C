#include<stdio.h>
#include<conio.h>
void main()
{
	int i,a=0,b=1,n,c;
	clrscr();
	printf("Enter the number");
	scanf("%d",&n);
	printf("%d%d ",a,b);
	for(i=0;i<n;i++)
	{
		c=a+b;
		a=b;
		b=c;
		printf("%d ",c);
	}
}