import java.util.*;
public class Main {
    public static void main(String[] args) {
        Scanner sc= new Scanner(System.in);
        
        int n= sc.nextInt();
        int temp=0;
        for(int i=2;i<=n/2;i++)
        {
            if(n%i==0)
            {
                temp=1;
                break;
            }
        }
        if(temp==1)
        {
            System.out.println("No");
        }
        else{
             System.out.println("Yes");
        }
    }
}
