#include <stdio.h>
int main()
{
int  n;
double i,sum=0;
printf("Enter the number \n");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
    sum=sum+1/i;
}
printf("the sum of series is %f",sum);
return 0;
}

output:-
Enter the number
5
the sum of series is 2.283333
