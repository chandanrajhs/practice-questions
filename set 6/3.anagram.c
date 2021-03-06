// solutions in c

#include <stdio.h>
int check_anagram(char [], char []);

int main()
{
  char a[1000], b[1000];

  printf("Enter two strings\n");
  gets(a);
  gets(b);

  if (check_anagram(a, b))
    printf("The strings are anagrams.\n");
  else
    printf("The strings aren't anagrams.\n");

  return 0;
}

int check_anagram(char a[], char b[])
{
  int first[26] = {0}, second[26] = {0}, c=0;

  // Calculating frequency of characters of the first string

  while (a[c] != '\0') {
    first[a[c]-'a']++;
    c++;
  }

  c = 0;

  while (b[c] != '\0') {
    second[b[c]-'a']++;
    c++;
  }

  // Comparing the frequency of characters

  for (c = 0; c < 26; c++)
    if (first[c] != second[c])
      return 0;

  return 1;
}

output:-
Enter two strings
act
cat
The strings are anagrams.






















































/*
// solutions in java

import java.util.Arrays;

public class vowels {
    public static void main(String[] args) {
        String x1 = "cat";
        String x2="act";
        char[] ch1= x1.toCharArray();
        char[] ch2=x2.toCharArray();
        Arrays.sort(ch1);
        Arrays.sort(ch2);

        if(Arrays.equals(ch1, ch2))
        {
            System.out.println("anagram");
        }
        else {
            System.out.println("Not anagram");
        }
    }
}
*/
