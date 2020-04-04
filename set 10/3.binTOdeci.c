#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
long int n;
int y=0,sum=0,rem=0;
printf("Enter the number:\n");
scanf("%ld",&n);
while(n!=0)
{
    rem=n%10;
    if(rem==1||rem==0)
    {
    sum=sum+(rem*pow(2,y));
    y++;
    n=n/10;
    }
    else
    {
        printf("invalid binary no\n");
        return 0;
    }
}
printf("the number is: %d",sum);
return 0;
}
