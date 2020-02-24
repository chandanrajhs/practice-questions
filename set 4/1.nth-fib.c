#include<stdio.h>
int fib(int n)
{
   if(n == 1)      //Base condition
        return 0;
    else if(n == 2) //Base condition
        return 1;
    else
        return fib(n-1) + fib(n-2);

}

int main ()
{
  int n;
   scanf("%d",&n);
  printf("%d", fib(n));
  return 0;
}
