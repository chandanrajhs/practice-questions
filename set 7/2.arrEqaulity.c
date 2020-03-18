#include<stdio.h>

int sort(int arr[], int n)
{
int i,j;
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

int arrays_equal(int arr1[], int arr2[], int n, int m)
{
sort(arr1,n);
sort(arr2,m);
int i;
for(i = 0; i < n; i++)
{
if(arr1[i] != arr2[i])
{
return 0;
}
}
}

int main()
{
int n, m;
scanf("%d",&n);
scanf("%d",&m);
int arr1[n];
int arr2[m];
int i;
for(i = 0; i < n; i++)
scanf("%d",&arr1[i]);

for(i = 0; i < m; i++)
scanf("%d",&arr2[i]);
if(m!=n)
{
printf("Not Same");
return 0;
}

if(arrays_equal(arr1, arr2, n, m) == 0)
{
printf("Not same");
}
else
printf("Same");

return 0;
}


output:-
4 4
1 2 3 4
4 3 2 1
Same

























/*

//solutions in java
import java.util.Arrays;
import java.util.Scanner;

public class vowels {
    public static void main(String[] args) {
        int arr1[] ={1,2,3,4};
        int arr2[]={1,4,3,1};
        Arrays.sort(arr1);
        Arrays.sort(arr2);
        boolean flag=false;
    for(int i=0;i<arr1.length;i++)
    {
        if(arr1[i]==arr2[i])
        {
            flag=true;
        }
        else
        {
            flag=false;
        }
    }
        if(flag==true)
        {
            System.out.println("Arrays are equal");
        }
        else {
            System.out.println("Arrays are not equal");
        }

            }
}

output:-
Arrays are equal
