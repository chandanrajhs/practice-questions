#include<stdio.h>
#include<stdlib.h>
void sort(int a[],int n)
{
int i,j,temp;
for(i=0;i<n;i++)
{
    for(j=i+1;j<n;j++)
    {
        if(a[i]>a[j])
        {
            temp=a[i];
            a[i]=a[j];
            a[j]=temp;
        }
    }
}
}

int main()
{
int a[50], n,i;
printf("Enter size of the  array : ");
scanf("%d", &n);
printf("Enter elements in array : ");
for(i=0;i<n;i++)
{
    scanf("%d",&a[i]);
}
sort(a,n);
int sum=a[n/2]+a[(n/2)-1];
printf("sum = %d",sum);
return 0;
}

output:
enter the size of array 
5
enter the elements
1 5 2 4 3
sum = 5
