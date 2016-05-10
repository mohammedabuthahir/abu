#include<stdio.h>
#include<conio.h>
void main()
{
	int i,a,b,sum=0,rem,temp;
	clrscr();
	printf("Enter the two number");
	scanf("%d %d",&a,&b);
	for(i=a;i<b;i++)
	{
		temp=i;
		while(temp>0)
		{
			rem=temp%10;
			sum+=rem*rem*rem;
			temp=temp/10;
		}
		if(sum==i)
		{
			printf("%d ",i);
		}
		sum=0;
	}
}