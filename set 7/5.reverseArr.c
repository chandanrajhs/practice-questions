#include<stdio.h>
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
printf("Given array is:\n");
for(i = 0; i < n; i++)
{
printf("%d ",arr[i]);
}
printf("\nReversed array is:\n");
for(i = n-1; i >= 0; i--)
{
printf("%d ",arr[i]);
}
return 0;

}

output:-
5
1 2 3 4 5
Given array is:
1 2 3 4 5
Reversed array is:
5 4 3 2 1





























/*

//solutions in java
public class reverse {
    public static void main(String[] args) {


        int arr[] = {1, 2, 3, 4, 5};
        int revarr[] = new int[arr.length];
        for (int i = arr.length-1; i >= 0; i--) {
            revarr[i]=arr[i];
            System.out.print(revarr[i]+" ");
        }

        }
    }
