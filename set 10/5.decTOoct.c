#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
int n;
int y=1,sum=0,rem=0;
printf("Enter the number:\n");
scanf("%d",&n);
while(n!=0)
{
    rem=n%8;
    sum=sum+(rem*y);
    y=y*10;
    n=n/8;
}
printf("the number is: %d",sum);
return 0;
}
