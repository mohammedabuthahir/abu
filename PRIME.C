#include<stdio.h>
#include<conio.h>
void main()
{
	int i,a,b,k=0,j;
	printf("Enter the two number");
	scanf("%d %d",&a,&b);
	for(i=a;i<b;i++)
	{
		for(j=1;j<=i;j++)
		{
			if(i%j==0)
			{
				k=k+1;
			}
		}
		if(k==2)
		{
			printf("%d\t",i);
		}
		k=0;

	}
}