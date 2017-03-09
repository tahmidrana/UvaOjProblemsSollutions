import java.math.*;
import java.util.*;

public class Main{
	public static void main(String[] args){
		try{
			Scanner sc = new Scanner(System.in);
			
			while(sc.hasNext()){
				BigInteger x = new  BigInteger(sc.next());
				//String s1 = in.next();
				BigInteger y = new BigInteger(sc.next());
				System.out.println(x.multiply(y));
				}
		}catch(Exception e){
			System.exit(0);
			}
		}
	}