#include <stdio.h>
int main()
{
int i,n;
double sum=0,fact=1;
printf("Enter the number \n");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
    fact=fact*i;
    sum=sum+i/fact;
}
printf("the sum of series is %f",sum);
return 0;
}
