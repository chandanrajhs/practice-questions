#include<stdio.h>
int check_palindrome(int x)
{
int div = 1;
while (x / div >= 10)
div=div*10;

while (x != 0)
{
int first = x / div;
int last = x % 10;

// If first and last digits are not same then return false
if (first != last)
return -1;

// Removing the leading and trailing digits from the number
x = (x % div) / 10;

// Reducing divisor by a factor of 2 as 2 digits are dropped
div = div / 100;
}
return 1;
}
int large_palindrome(int a[], int n)
{
int temp;
for(int i=0; i<n; i++)
{
for(int j=i; j<n; j++)
{
if(a[i] >a[j])
{
temp = a[i];
a[i] = a[j];
a[j] = temp;
}
}
}
printf("Sorted array\n");
for(int i=0; i<n; i++)
{
printf("%d ", a[i]);
}

for (int i = n-1; i >= 0; i--)
{
if (check_palindrome(a[i]) == 1)
{
return a[i];
}
return -1;
}
}
int main()
{
long int a[100];
int n, i;
printf("Enter the number of entries: \n");
scanf("%d", &n);
printf("Enter the elements: \n");
for(i=0; i<n; i++)
scanf("%d", &a[i]);
printf("\n Largest Palindrome: %d", large_palindrome(a, n));
return 0;
}
