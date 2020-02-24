//in c

#include <stdio.h>

int main()
{
    char str[50];
    int i, vowels, consonants;
    i = vowels = consonants = 0;

    printf("Enter a String :");
    scanf("%s",str);

    while (str[i] != '\0')
    {
        if(str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u' ||
           str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U')
        {
            vowels++;
        }
        else
            consonants++;
        i++;
    }
    printf("\n Number of Vowels in this String = %d", vowels);
    printf("\n Number of Consonants in this String = %d", consonants);

    return 0;
}
output:-

Enter a string: college
Total number of vowels : 3
Total number of consonants : 4
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    

//solutions in java
    
/*
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
*/
