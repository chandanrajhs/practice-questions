#include<stdio.h>
void main()
{
int i,j,k,n;
clrscr();
scanf("%d",&n);
for(i=n;i>0;i--)
{
	for(j=0;j<(n-i);j++)
	{
		printf(" ");

	}
	if(i!=n)
	for(k=0;k<i;k++)
	{

		if(k==0||k==i-1)
		{
		printf("*");
		printf(" ");
		}
		else
		printf("  ");
	}
	if(i==n)
	{
	for(k=0;k<n;k++)
	printf("* ");

	}

	printf("\n");

}
getch();

}
output:
6
* * * * * *
 *       *
  *     *
   *   *
    * *
     *
