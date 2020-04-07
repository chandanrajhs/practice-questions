//12,35,81,173,357.......
//logic:
//12 if n=1;
//lastdigit*2+11 if n>1

#include <stdio.h>
#include<math.h>
int main()
{
int  n,x=0,i;
int fir=12;
printf("Enter the number \n");
scanf("%d",&n);
x=((fir*(pow(2,n-1)))+11*((pow(2,n-1))-1));
printf("the  nth term of series is %d",x);
 return 0;
}
