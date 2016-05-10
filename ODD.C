#include<stdio.h>
#include<conio.h>
void main()
{
	int i,a,b;
	printf("Enter the two number");
	scanf("%d %d",&a,&b);
	for(i=a+1;i<b;i++)
	{
		if(i%2!=0)
		{
			printf("%d",i);
		}
	}
}