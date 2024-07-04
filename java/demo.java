import java.util.Scanner;
public class demo
{
    public static void main(String[] args) {
        System.out.print("Enter the rows");
        Scanner s=new Scanner(System.in);
        int n=s.nextInt();
       //int n=5;
        for(int i=0;i<n;i++){
            for(int j=0;j<n-i-1;j++){
                System.out.print(" ");
            }
            for(int j=0;j<i+1;j++){
                System.out.print("* ");
            }
            for(int j=0;j<n-i-1;j++){
                System.out.print(" ");
            }
            System.out.print("\n");
        }
        for(int i=0;i<n;i++){
            for(int j=0;j<i-1+1;j++){
                System.out.print(" ");
            }for(int j=0;j<n-i-1+1;j++){
                System.out.print("* ");
            }
            for(int j=0;j<i-1+1;j++){
                System.out.print(" ");
            }
            System.out.print("\n");
        }
    }
}