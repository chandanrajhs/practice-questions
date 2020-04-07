#include <stdio.h>
int main()
{
int i,n,sum=0;
printf("Enter the number \n");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
    sum=sum+(i*i);
}
printf("the sum of squares is %d",sum);
return 0;
}









































/*
in java

import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        System.out.println("Enter the number");
        double n=sc.nextDouble();
        double sum=0;
        for(int i=1;i<=n;i++)
        {
            sum=sum+Math.pow(i,2);
        }
        System.out.println("the sum of series is "+sum);
    }
}
