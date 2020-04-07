//5,13,25,41,61,113,......
//nth=n^2+(n+1)^2


#include <stdio.h>
#include<math.h>
int main()
{
int n,i;
double nth=0;
printf("Enter the number \n");
scanf("%d",&n);
nth =pow(n,2)+pow(n+1,2);
printf("the  nth term of series is %lf",nth);
 return 0;
}
