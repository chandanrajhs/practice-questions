#include <stdio.h>
#include <string.h>

int main()
{
char a[100], b[100];

printf("Enter the string : ");
scanf("%s",a);

strcpy(b, a); /* Copying input string */
strrev(b); /* Reversing the string */

if (strcmp(a, b) == 0) /* Comparing input string with the reverse string */
printf("The string is a palindrome\n");
else
printf("The string is not t a palindrome\n");

return 0;
}


output:-
Enter the string : madam
The string is a palindrome














































































/*

//solutions in java
import java.util.Scanner;

public class vowels {
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        System.out.println("Enter the string:");
        String x= sc.nextLine().toLowerCase();

        String rev=new StringBuilder(x).reverse().toString();
        if(x.equals(rev))
        {
            System.out.println("String is palindrome");
        }
        else
        {
            System.out.println("String is not a palindrome");
        }
    }
}

output:-
Enter the string:
Madam
String is palindrome
