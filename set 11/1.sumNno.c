#include <stdio.h>
int main()
{
int i,n,sum=0;
printf("Enter the number \n");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
    sum=sum+i;
}
printf("the sum of series is %d",sum);
return 0;
}










































/*
java 
import java.awt.event.ItemEvent;
import java.sql.SQLOutput;
import java.util.Arrays;
import java.util.Scanner;

public class arraysacebding {
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        System.out.println("Enter the number");
        int n=sc.nextInt();
        int sum=0;
        for(int i=1;i<=n;i++)
        {
            sum=sum+i;
        }
        System.out.println("the sum of series is "+sum);
    }
}
