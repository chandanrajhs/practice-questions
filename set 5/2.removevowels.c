#include <stdio.h>
#include<string.h>
int check_vowel(char);

int main()
{
char str[100], temp[100];
int c, d = 0;
printf("Enter the string:\n");
scanf("%s",str);
for(c = 0; str[c] != '\0'; c++)
{
if(check_vowel(str[c]) == 0)
{
temp[d] = str[c];
d++;
}
}
temp[d] = '\0';
strcpy(str,temp);

printf("string without vowels is %s\n",str);
return 0;
}
int check_vowel(char ch)
{
if (ch == 'a' || ch == 'A' || ch == 'e' || ch == 'E' || ch == 'i' || ch == 'I' || ch =='o' || ch=='O' || ch == 'u' || ch == 'U')
    return 1;
else
    return 0;
}


output:-
Enter the string:
Morning
Mrnng

/*
//Solutions in java

import java.util.Scanner;

public class vowels {
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        System.out.println("Enter the string:");
        String x= sc.nextLine().toLowerCase();

        String res=x.replaceAll("[aeiou]","");


        System.out.println("The  String without vowels is:"+res);
    }
}
output:-
Morning
The  String without vowels is:mrnng
*/
