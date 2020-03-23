#include <stdio.h>
#include <stdlib.h>
void non_repeating_elements(int arr[], int n)
{
int i,j;
for(i = 0; i < n; i++)
{
for(j = 0; j < n; j++)
{
if(arr[i] == arr[j] && i != j)
break;
}
if(j == n )
{
printf("\nNon-repeating element %d ",arr[i]);
}
}
}
int main()
{
int n,i;
printf("\nEnter the number of elements : ");
scanf("%d",&n);
int arr[n];
printf("\nInput the array elements : ");
for(i = 0; i < n; i++)
{
scanf("%d",&arr[i]);
}
non_repeating_elements(arr, n);
return 0;
}
