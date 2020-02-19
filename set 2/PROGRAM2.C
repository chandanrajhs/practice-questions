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

output:
6
1 2 3 4 5 6
1 2 3 4 5
1 2 3 4
1 2 3
1 2
1
