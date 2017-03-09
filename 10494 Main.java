import java.math.*;
import java.util.*;

public class Main {

    public static void main(String[] args) {
        try {
            Scanner in = new Scanner(System.in);

            while (in.hasNext()) {
                BigInteger n1 = new BigInteger(in.next());
                String op = in.next();
                BigInteger n2 = new BigInteger(in.next());
                BigInteger res = new BigInteger("0");

                if (op.equals("/")) res = n1.divide(n2);
                if (op.equals("%")) res = n1.mod(n2);
                System.out.println(res);
            }
        } catch (Exception e) {
            //e.printStackTrace();
            System.exit(0);
        }
    }
}