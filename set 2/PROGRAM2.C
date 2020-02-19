#include<stdio.h>
void main()
{
int n,i,j,z;
clrscr();
scanf("%d",&n);
for(i=n;i>0;i--)
{
z=1;
for(j=0;j<n;j++)
{
	if(j<i)
	{
	printf("%d",z);
	z++;
	}
}
printf("\n");
}
getch();
}