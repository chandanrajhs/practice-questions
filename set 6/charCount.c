// solutions in c

#include <stdio.h>
#include <string.h>

int main()
{
    char string[100];
    scanf("%[^\n]",string);
    int i, j, length = strlen(string);
    int freq[length];


    for(i = 0; i < strlen(string); i++) {
        freq[i] = 1;
        for(j = i+1; j < strlen(string); j++) {
            if(string[i] == string[j]) {
                freq[i]++;

                //Set string[j] to 0 to avoid printing visited character
                string[j] = '0';
            }
        }
    }

    //Displays the each character and their corresponding frequency
    printf("Characters and their corresponding frequencies\n");
    for(i = 0; i < length; i++) {
        if(string[i] != ' ' && string[i] != '0')
            printf("%c-->%d times\n", string[i], freq[i]);
    }

    return 0;
}



































































output:-

qafregrdcscasawdqwerhtyj
Characters and their corresponding frequencies
q-->2 times
a-->3 times
f-->1 times
r-->3 times
e-->2 times
g-->1 times
d-->2 times
c-->2 times
s-->2 times
w-->2 times
h-->1 times
t-->1 times
y-->1 times
j-->1 times

/*


// solutions in java

//import java.util.Scanner;

public class vowels {
    public static void main(String[] args) {
        //Scanner sc=new Scanner(System.in);
        //System.out.println("Enter the string:");
        String x = "instagram";
        char[] ch = x.toCharArray();

        int[] temp = new int[x.length()];
        for (int i = 0; i < x.length(); i++) {
            temp[i] = 1;
            for (int j = i + 1; j < x.length() - 1; j++) {
                if (ch[i] == ch[j]) {
                    temp[i]++;
                    ch[j]='0';        // to prevent from repeated character print
                }
            }
        }
            for (int k = 0; k < temp.length; k++) {
                if(ch[k]!=' ' && ch[k] != '0') {
                    System.out.println(ch[k]+"-->"+temp[k]);
                }
            }
    }

}

output:-
i-->1
n-->1
s-->1
t-->1
a-->2
g-->1
r-->1
m-->1



















































*/
