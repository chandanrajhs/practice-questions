import java.util.*;
class Main {
	public static void main (String[] args) {
	
		Scanner sc= new Scanner(System.in);
		
		    int n=sc.nextInt();
		    String s=Integer.toString(n);
		    String rev=new StringBuilder(s).reverse().toString();
		    if(s.equals(rev))
		    {
		        System.out.println("Yes");
		    }
		    else
		    {
		        System.out.println("No");
		    }
	}
}
