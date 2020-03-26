#include <stdio.h>
int main()
{
int a[50], n,i,key,flag=0;
 printf("Enter size of the  array : ");
    scanf("%d", &n);
    printf("Enter elements in array : ");
    for(i=0;i<n;i++)
{
    scanf("%d",&a[i]);
}
printf("Enter the element to be search ");
 scanf("%d",&key);
for(i = 0; i < n; i++)
{
    if(a[i]==key)
    {
        flag=1;
        printf("The  element is present at index %d",i);
    }
}
if(flag==0)
    printf("Element not found");
return 0;
}
