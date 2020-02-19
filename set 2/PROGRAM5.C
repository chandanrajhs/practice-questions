#include<stdio.h>
void main()
{
int n,i,j,k,z;
clrscr();
scanf("%d",&n);
for(i=0;i<n;i++)
{
z=i+1;
	for(j=0;j>(n-i);j++)
	{
		printf(" ");
	}
	if(i!=0)
	for(k=n;k>i;k--)
	{
	if((k==n||k==i+1))
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
if(i==0)
{
z=i+1;
for(k=0;k<n;k++)
{
	printf("%d ",z);
	z++;
}
printf("\n");
}


}
getch();
}

output:
6

1 2 3 4 5 6
2       6
3     6
4   6
5 6
6