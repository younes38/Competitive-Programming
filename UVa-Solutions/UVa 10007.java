import java.math.BigInteger;
import java.util.Scanner;
public class Main {

    public static void main(String[] args) {
        Scanner sc  = new Scanner(System.in) ;
        while (true) {
            int n = sc.nextInt();
            if ( n == 0 ) break ;
            BigInteger a = BigInteger.ONE ;
            for(int i = 1; i <=n; i++) {
                a = a.multiply( BigInteger.valueOf(2*(2*i-1))).divide(BigInteger.valueOf(i+1)).multiply(BigInteger.valueOf(i)) ; 
            }
            System.out.println(a);
        }    
        
    }
}
