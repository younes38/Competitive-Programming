import java.math.BigDecimal;
import java.math.BigInteger;
import java.util.Scanner;
import java.util.Vector;

import javax.security.auth.kerberos.KerberosKey;

import java.io.OutputStream;
import java.io.IOException;
import java.io.InputStream;
import java.io.PrintWriter;
import java.util.Scanner;
import java.math.BigInteger;
public class Main {

    public static void main(String[] args) {
        Scanner sc  = new Scanner(System.in) ;
        Vector<BigInteger> vector = new Vector<>() ;
        vector.add(BigInteger.ONE) ;
        vector.add(BigInteger.valueOf(2)) ;
        for(int i = 2; i <=1000; i++){
            vector.add(vector.get(i-1).add(vector.get(i-2))) ;
        }
        while (sc.hasNext()) {
            int n  = sc.nextInt();
            System.out.println(vector.get(n));
        }
        
        
    }

}
