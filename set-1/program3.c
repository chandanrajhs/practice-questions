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
	for(k=0;k<=(i);k++)
	{
		printf("*");
		printf(" ");
	}
	printf("\n");
}
getch();

}

output:
6
      *
     * *
    * * *
   * * * *
  * * * * *
 * * * * * *
