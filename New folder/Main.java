import java.util.*;

public class Main{
    public static void main(String[] args){
        Scanner sc =new Scanner(System.in);
        System.out.println("enter the rows");
        int rows=sc.nextInt();
        for(int i=1;i<=rows;i++){
            for(int j=rows;j>i;j--){
                System.out.println(" ");
            }
            System.out.println("*");
            for(int k=1;k<2*(i-1);k++){
                System.out.println(" ");
            }
            if(i==1){
                System.out.println("");
            }else{
                System.out.println("*");
            }
        }
        for(int i=rows-1;i>=1;i--){
            for(int j=rows;j>i;j--){
                System.out.println(" ");
            }
            System.out.println("*");
            for(int k=1;k<2*(i-1);k++){
                System.out.println(" ");
            }
            if(i==1){
                System.out.println("");
            }else{
                System.out.println("*");
            }
        }
    }
}