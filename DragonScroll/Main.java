import java.util.*;

public class Main {
    public static void main(String[] args) {
	Scanner sc = new Scanner(System.in);
	int t = sc.nextInt();
	int length, a, b;
	String aStr, bStr;
	int aCount = 0, bCount = 0;
	String max;
	int total;
	for (int i = 0; i < t; ++i) {
	    length = sc.nextInt();
	    a = sc.nextInt();
	    b = sc.nextInt();
	    aStr = Integer.toBinaryString(a);
	    bStr = Integer.toBinaryString(b);
	    if (aStr.length() > length || bStr.length() > length) {
		System.out.println("0");
	    } else {
		aCount = 0;
		bCount = 0;
		for (int j = 0; j < aStr.length(); ++j) {
		    if (aStr.charAt(j) == '1') aCount++;
		}
		for (int j = 0; j < bStr.length(); ++j) {
		    if (bStr.charAt(j) == '1') bCount++;
		}
	    }
	    max = "";
	    total = aCount + bCount;
	    if (total >= length) {
		for (int j = 0; j < length; ++j) {
		    if (j < length - (total - length) ) max += "1";
		    else max += "0";
		}
	    } else {
		for (int j = 0; j < length; ++j) {
		    if (j < total) max += "1";
		    else max += "0";
		}
	    }
	    System.out.println(Integer.parseInt(max, 2));
	}
	sc.close();
    }

}