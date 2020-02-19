#include<stdio.h>
void main()
{
int n,i,j,k,z;
clrscr();
scanf("%d",&n);
for(i=0;i<n;i++)
{
z=1;
	for(j=0;j>(n-i);j++)
	{
		printf(" ");
	}

	for(k=0;k<i;k++)
	{
	if(k==0||k==i-1)
	{
		printf("%d ",z);
		z++;
	}
	else
	{
		printf("  ");
		z++;
	}
	}
printf("\n");
if(i==n-1)
{
z=1;
for(k=0;k<n;k++)
{
	printf("%d ",z);
	z++;
}
}
}
getch();
}