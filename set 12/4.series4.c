//1,2,2,4,4,4,4,8,8,8,8,8,8,8,8,16,16,16......


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
