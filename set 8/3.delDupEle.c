#include<stdio.h>
int main()
{
int n,x;
scanf("%d",&n);
int arr[n];
int i,j,k;
for(i = 0; i < n; i++)
{
scanf("%d",&arr[i]);
}
for(i=0; i<n; i++)
{
for(j=i+1; j<n; j++)
{
            /* If any duplicate found */
if(arr[i] == arr[j])
{
                /* Delete the current duplicate element */
for(k=j; k<n; k++)
{
    arr[k] = arr[k + 1];
}

                /* Decrement size after removing duplicate element */
n--;

                /* If shifting of elements occur then don't increment j */
j--;
}
}
}
for (i=0; i<n; i++)
printf("%d ",arr[i]);

return 0;
}
