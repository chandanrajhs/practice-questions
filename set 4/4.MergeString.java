import java.util.*;
public class Main { 
    public static void main(String[] args) 
    { 
    	Scanner sc=new Scanner(System.in);
        String s1 =sc.next(); 
        String s2 = sc.next(); 
        StringBuilder result = new StringBuilder();
        for (int i = 0; i < s1.length() || i < s2.length(); i++) { 
        	  
            // First choose the ith character of the 
            // first string if it exists 
            if (i < s1.length()) 
                result.append(s1.charAt(i)); 
  
            // Then choose the ith character of the 
            // second string if it exists 
            if (i < s2.length()) 
                result.append(s2.charAt(i)); 
        } 
        System.out.println(result.toString()); 
    } 
} 



output:
qwerty
asdfghjkl
qawsedrftgyhjkl
