import java.util.Scanner;

public class calculator {
    public static void main(String args[]) {
        Scanner z =new Scanner(System.in);
             int a=z.nextInt();
             int b=z.nextInt();
             int operator =z.nextInt();
             switch(operator){
                case 1:System.out.println(a+b);
                break;
                case 2: System.out.println(a-b);
                break;
                case 3: System.out.println(a*b);
                break;
                case 4: if(b==0){
                    System.out.println("invallid division");
                }else{
                    System.out.println(a/b);
                }
                break;
                case 5: if(b==0){
                    System.out.println("invallid division");
                }else{
                    System.out.println(a%b);
                }
                break ;
                default: System.out.println("invalid division");
        
    }
}
}