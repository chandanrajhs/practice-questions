#include<stdio.h>

int main()
{
char str[100]; // characer array
char *ptr;  // pointer
int cntV,cntC;  // variables to store the count of vowels and sonsonants

printf("Enter a string: ");
gets(str);

ptr=str;  // Assign the character array to the pointer

cntV=cntC=0;
while(*ptr!='\0')  // Check if the scanned character is a vowel
{
if(*ptr=='A' ||*ptr=='E' ||*ptr=='I' ||*ptr=='O' ||*ptr=='U' ||*ptr=='a' ||*ptr=='e' ||*ptr=='i' ||*ptr=='o' ||*ptr=='u')
cntV++;   // increment vowel count
else
cntC++;  // increment consonant count
ptr++;    // Increment the pointer to scan the next character
}

printf("Total number of vowels : %d\nTotal number of consonants : %d\n",cntV,cntC);
return 0;
}
output:-

Enter a string: college
Total number of vowels : 3
Total number of consonants : 4

//solutions in java
import java.util.Scanner;

public class vowels {
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        System.out.println("Enter the string:");
        String x= sc.nextLine().toLowerCase();
        int conval=0;
        int vcount=0;

        char ch[]=x.toCharArray();
        for(int i=0;i<ch.length;i++)
        {
            if(ch[i]=='a'||ch[i]=='e'|| ch[i]=='i'||ch[i]=='o'||ch[i]=='u')
            {
               vcount++;
            }
            else
            {
                conval++;
            }
        }
        System.out.println("The no of vowels in String:"+vcount);
        System.out.println("The no of consonants in String:"+conval);
    }
}
output:-
Enter the string:
college
The no of vowels in String:3
The no of consonants in String:4
