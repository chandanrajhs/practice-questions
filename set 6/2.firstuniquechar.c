// solutions in c

#include <stdio.h>
#include <string.h>

void main()
{
    char string[100];
    scanf("%[^\n]",&string);
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
   for(i = 0; i < length; i++) {
        if(string[i] != ' ' && string[i] != '0'){
        if(freq[i]==1){
            printf("%c-%d\n", string[i], freq[i]);
              break;
        }
    }
    }
}













































































/*


//solutions in java

//import java.util.Scanner;

public class vowels {
    public static void main(String[] args) {
        //Scanner sc=new Scanner(System.in);
        //System.out.println("Enter the string:");
        String x = "google";
        char[] ch = x.toCharArray();

        int[] temp = new int[x.length()];
        for (int i = 0; i < x.length(); i++) {
            temp[i] = 0;
            for (int j = i + 1; j < x.length(); j++) {
                if ((ch[i]) == (ch[j])) {
                    temp[i]++;
                    ch[j] = '0';
                    // to prevent from repeated character print
                }
            }
        }
        for (int k = 0; k < temp.length; k++) {
            if (ch[k] != ' ' && ch[k] != '0') {
                if (temp[k] == 0) {
                    System.out.println(ch[k] +"-->"+temp[k]);
                    break;

                }

            }


        }
    }
}

output:-
l-->0
*/
