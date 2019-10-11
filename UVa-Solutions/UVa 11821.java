

import java.math.BigDecimal;
import java.math.BigInteger;
import java.util.Scanner;
import java.io.OutputStream;
import java.io.IOException;
import java.io.InputStream;
import java.io.PrintWriter;
import java.util.Scanner;
import java.math.BigInteger;
public class Main {

    public static void main(String[] args) {
        Scanner sc  = new Scanner(System.in) ;
        int t = sc.nextInt() ;
        while (t-- > 0) {
    
            BigDecimal a, sum = BigDecimal.ZERO ;
            while (true) {
                a = sc.nextBigDecimal();
                if (a.equals(BigDecimal.ZERO)) break ;
                sum  = sum.add(a);
            }
            System.out.println(sum.stripTrailingZeros().toPlainString());
            
            
        }
        
        
    }

}
