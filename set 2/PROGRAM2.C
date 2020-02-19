#include<stdio.h>
void main()
{
int n,i,j;
clrscr();
scanf("%d",&n);
for(i=n;i>0;i--)
{
for(j=1;j<=i;j++)
{
	printf("%d",j);
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
