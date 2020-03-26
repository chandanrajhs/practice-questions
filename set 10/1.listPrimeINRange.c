#include <stdio.h>
int main()
{
int a, b, i,j, flag;
printf("Enter start value : ");
scanf("%d",&a);
printf("\nEnter end value : ");
scanf("%d",&b);
printf("\nPrime Numbers between %d and %d are: ", a, b);
for(i=a;i<=b;i++)
{
    flag=0;
    for(j=2;j<=i-1;j++)
    {
        if(i%j==0)
        {
            flag=1;
            break;
        }
    }
    if(flag==0 && i>1)
    {
        printf("%d ",i);
    }
}
return 0;
}
