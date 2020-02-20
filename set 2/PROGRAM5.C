#include<stdio.h>
void main()
{
int i,j,n;
clrscr();
scanf("%d",&n);
for(i=1;i<=n;i++)
{
for(j=i;j<=n;j++)
{
	if(j==n||j==i||i==1)
	printf("%d ",j);
	else
	printf("  ");
}
printf("\n");

}
getch();
}