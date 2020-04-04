#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
int n,y=0;
int sum=0,rem=0;
printf("Enter the number:\n");
scanf("%d",&n);
printf("the number is: ");
while(n!=0)
{
    rem=n%10;
    if(rem==0)
    {
        rem++;
    }
    sum=sum+(rem*pow(10,y));
    y++;
    n=n/10;
}
printf("%d",sum);
return 0;
}
