#include<stdio.h>
int main()
{
int n;
int i;
printf("Enter the size of the array\n");
scanf("%d",&n);
int a[n];
int b[n];
printf("Enter the elements\n");
for(i=01;i<=n;i++)
{
    b[i]=0;
    scanf("%d",&a[i]);
}
for(i=01;i<=n;i++)
{
    b[a[i]]=1;
}
printf("the missing numbers in the array are: ");
for(i=01;i<=n;i++)
{
    if(b[i]==0)
    printf("%d ",i);
}
}

output:
enter the size of array
6
enter the elements of the array
1 3 1 4 6 4
missing elements in the array are: 2 5
