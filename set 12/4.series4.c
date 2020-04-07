#include <stdio.h>
#include<math.h>
int main()
{
int n,i;
double nth=0;
printf("Enter the number \n");
scanf("%d",&n);
double result =(floor(log(n) / log(2)));
nth= pow(2, result);
printf("the  nth term of series is %lf",nth);
 return 0;
}
