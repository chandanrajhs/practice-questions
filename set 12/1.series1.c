#include <stdio.h>
int main()
{
int  n,x=0,i;
printf("Enter the number \n");
scanf("%d",&n);

   if(n%2==0)
   {
  x=n*n-1;
   }
   else
   {
   x=n*n+1;       
   }
printf("the  nth term of series is %d",x);
 return 0;
}
