#include<stdio.h>
void main()
{
int i,j,k,n;
clrscr();
scanf("%d",&n);
for(i=0;i<n;i++)
{
	for(j=0;j<(n-i);j++)
	{
		printf(" ");

	}

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
	printf("\n");
	if(i==n-1)
	for(k=0;k<n;k++)
	printf("* ");
}
getch();

}
output:
6
     *
    * *
   *   *
  *     *
 *       *
* * * * * *
