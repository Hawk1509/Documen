import java.util.*;
public class prmeRang {
    public static void main(String[] args){
        int a,b;
        int i,j;
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter lowe limit number: ");
         a = sc.nextInt();
         System.out.println("Enter upper limit: ");
         b = sc.nextInt();
         System.out.println("The prime numbers are: \n");
         for (i=a;i<b;i++)
         {
            for (j=2;j<i;j++)
            {
                if(i%j == 0)
                break;
            }
            if(i == j)
            {
                System.out.println(+i);
            }
         }
    }
    
}
