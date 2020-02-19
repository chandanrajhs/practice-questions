#include<stdio.h>
void main()
{
int n,i,j,k,z;
clrscr();
scanf("%d",&n);
for(i=0;i<n;i++)
{

	for(j=0;j<(n-i);j++)
	{
		printf("  ");
	}
	z=i+1;

	for(k=0;k<i+1;k++)
	{
	printf("%d ",z);
	z++;
	}
	z=z-2;

	for(k=0;k<i;k++)
	{
	printf("%d ",z);
	z--;
	}
printf("\n");
}
getch();
}

output: 
6
	  1
        2 3 2
      3 4 5 4 3
    4 5 6 7 6 5 4
  5 6 7 8 9 8 7 6 5
6 7 8 9 10 11 10 9 8 7 6
	
	
5
	  1
        2 3 2
      3 4 5 4 3
    4 5 6 7 6 5 4
  5 6 7 8 9 8 7 6 5	
