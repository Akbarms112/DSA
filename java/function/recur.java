package function;
import java.util.Scanner;
public class recur {
        public static void main(String[] args){
            Scanner sc =new Scanner(System.in);
            int n=sc.nextInt();
            func(n, n);
    
        }
         public static int  func(int i,int n){
            if(i<1){ return 1;}
            func(i-1, n);
            System.out.println(i);
            return n;
        }
    }
    

