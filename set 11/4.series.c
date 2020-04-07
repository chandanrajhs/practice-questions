#include <stdio.h>
int main()
{
int  n;
double i,sum=0;
printf("Enter the number \n");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
    sum=sum+1/i;
}
printf("the sum of series is %f",sum);
return 0;
}

output:-
Enter the number
5
the sum of series is 2.283333

    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    /*
    in java
    
    import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        System.out.println("Enter the number");
        int n=sc.nextInt();
        double sum=0.0;

        for(double i=1;i<=n;i++)
        {

            sum=sum+1/i;
        }
        System.out.println("the sum of series is "+sum);
    }
}
