#include<stdio.h>
void main()
{
int n,i,j,k,z;
clrscr();
scanf("%d",&n);
for(i=0;i<n;i++)
{

	for(j=0;j<(n-i);j++)
	{
		printf("  ");
	}
	z=i+1;

	for(k=0;k<i+1;k++)
	{
	printf("%d ",z);
	z++;
	}
	z=z-2;

	for(k=0;k<i;k++)
	{
	printf("%d ",z);
	z--;
	}
printf("\n");
}
getch();
}