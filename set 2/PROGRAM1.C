#include<stdio.h>
void main()
{
int n,i,j;
clrscr();
scanf("%d",&n);
for(i=0;i<n;i++)
{
for(j=0;j<=i;j++)
{
	printf("%d",j+1);
}
printf("\n");
}
getch();
}

output:
6
1
1 2
1 2 3
1 2 3 4
1 2 3 4 5
1 2 3 4 5 6
