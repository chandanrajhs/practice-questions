#include<stdio.h>
#include<math.h>

int isPerfectSquare(int number)
{
int i;
float f;

f=sqrt(number);
i=f;

if(i==f)
return number;
else
return 0;
}

int main()
{
int n;
scanf("%d",&n);
int arr[n];
int i;
for(i = 0; i < n; i++)
{
scanf("%d",&arr[i]);
}
int sum = 0;
for(i = 0; i < n; i++)
{
sum = sum + isPerfectSquare(arr[i]);
}
printf("%d",sum);
return 0;
}

output:-
4
1 2 4 6
5
