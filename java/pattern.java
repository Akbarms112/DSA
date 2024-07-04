// sample code 1

// import org.w3c.dom.Text;

// public class pattern {
//     public static void main(String[] args)
//     {
//         String pattern="akbarali";
//         String match="kbar";
//         boolean result=pattern.contains(match);
//         if(result)
//         {
//             System.out.println("found");
//         }else{
//             System.out.println("not found");
//         }
//     }
// }



// sample code 2


// import org.w3c.dom.Text;

// public class pattern {
//     public static void main(String[] args)
//     {
//         String pattern="akbarali";
//         String match="kbr";
//         int count=0;
//         int tlen=pattern.length();
//         int plen=match.length();
//         char c,p;
//         for(int i=0;i<=tlen-plen;i++){
//             c=pattern.charAt(i);
//             p=match.charAt(0);
//             if(c==p)
//             {
//                 for(int j=i,k=0;j<i+plen;j++,k++){
//                     c=pattern.charAt(j);
//                     p=match.charAt(k);
//                     if(c==p){
//                         count++;
//                     }
//                 }
//             }
            
//         }
//         if(count==plen)
//         {
//             System.out.println("found");
//         }else{
//             System.out.println("not found");
//         }
//     }
// }
//import java.util.*;

import java.util.*;

import javax.management.ValueExp;

public class pattern{
   public static void main(String args[]) {
      Scanner x = new Scanner(System.in);
      int a=x.nextInt();
      int b=x.nextInt();
      if(a==b){
         System.out.println("akd");
      }else{
         if(a>b){
            System.out.println("ndhcb");
         }else{
            System.out.println("jbdh");
         }
      }
   }
}
