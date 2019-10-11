

import java.math.BigDecimal;
import java.math.BigInteger;
import java.util.Scanner;
import java.util.Vector;

import javax.security.auth.kerberos.KerberosKey;

import java.io.OutputStream;
import java.awt.image.Raster;
import java.io.IOException;
import java.io.InputStream;
import java.io.PrintWriter;
import java.util.Scanner;
import java.math.BigInteger;
public class Main {

    public static void main(String[] args) {
        Scanner sc  = new Scanner(System.in) ;
        Vector<Vector<BigInteger>> V = new Vector<>() ;
        for(int i = 0 ; i <1010; i++) {
            V.add(new Vector<BigInteger>());
            for(int j = 0 ; j <= i; j++)
                if (j == 0 || j == i)
                    V.get(i).add(BigInteger.ONE) ;
                else 
                    V.get(i).add( V.get(i-1).get(j).add(V.get(i-1).get(j-1))) ;
        }
        int t= sc.nextInt();
        while (t-- > 0) {
            int n = sc.nextInt();
            int k = sc.nextInt();
            int s = 0 ;
            for(int i = 0 ; i < k; i++) s+= sc.nextInt() ;
            n = n -(s-k) - (k-1) ;
            if (n < k) System.out.println(0);
            else System.out.println(V.get(n).get(k));
        }        
        
    }
}
