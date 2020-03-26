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

output:-

 Enter size of the  array : 5
Enter elements in array : 1 2 3 4 5
Enter the element to be search 3

The  element is at index of 2


 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 /*
 //solutions in java
public class searchElementinArray {
    public static void main(String[] args) {


    int[] arr={1,2,3,4};
    int element=3;
    int k=0;
    for(int i=0;i<arr.length;i++)
    {
        if(arr[i]==element)
        {
            k=i;
            break;

        }

    }
        System.out.println("The element is at index of "+k);
    }
}
output:-
The element is at index of 2
