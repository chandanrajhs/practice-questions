#include <stdio.h>
void sort(int arr[], int n)
{
int i, j;
for (i = 0; i < n-1; i++)
{
for (j = 0; j < n-i-1; j++)
{
if (arr[j] > arr[j+1])
{
int temp = arr[j];
arr[j] = arr[j+1];
arr[j+1] = temp;
}
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
sort(arr, n);
printf("\nThe second largest element is %d \n",arr[n-2]);
return 0;
}
output:-
Enter the number of elements : 5

Input the array elements : 2 4 5 6  7

The second largest element is 6




































/*

//solutions in java
import java.util.Arrays;

public class Secondlargst {
    public static void main(String[] args) {
        int[] arr={2, 4, 5, 6, 7};
        Arrays.sort(arr);
        for (int i=0;i<arr.length;i++)
        {
            System.out.println("The second largest element is "+(arr[arr.length-2]));
            break;
        }

    }
}
output:-
The second largest element is 6
