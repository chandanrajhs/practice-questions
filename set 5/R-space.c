#include<stdio.h>

char *remove_white_spaces(char *str)
{
int i = 0, j = 0;
while (str[i])
{
if (str[i] != ' ' )
str[j++] = str[i];
i++;
}
str[j] = '\0';
return str;
}

int main()
{
char str[50];
gets(str);
remove_white_spaces(str);
printf("%s",str);
return 0;
}

output:-
L I F E
LIFE

//solutions in java
import java.util.Scanner;

public class vowels {
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        System.out.println("Enter the string:");
        String x= sc.nextLine();

        String res=x.replaceAll(" ","");
        System.out.println(res);



    }
}
Enter the string:
L I F E
LIFE
