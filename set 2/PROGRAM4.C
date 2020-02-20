#include<stdio.h>
void main()
{
int i,j,n;
clrscr();
scanf("%d",&n);
for(i=1;i<=n;i++)
{
for(j=1;j<=n;j++)
{
	if(j==1||j==i||i==n)
	printf("%d ",j);
	else
	printf("  ");
}
printf("\n");

}
getch();
}

output:

5
1
1 2
1   3
1     4
1 2 3 4 5
