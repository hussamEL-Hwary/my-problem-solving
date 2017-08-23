//============================================================================
// Name        :
// Author      : hussam
// Version     :
// Copyright   :
// Description :
//============================================================================


import java.lang.reflect.Array;
import java.util.*;

public class mycode {

	public static void main(String[] args) {

		Scanner cin = new Scanner(System.in);
		int n = cin.nextInt();
		long k = cin.nextLong();

		int dis = 0;
		for (int i = 0; i < n; i++) {
			String key = cin.next();
			int val = cin.nextInt();

			if (key.equals("+")) {
				k += val;
			} else if (k - val < 0) {
				dis++;
			} else
				k -= val;

		}

		
		System.out.println(k+" "+dis);
		
	}
}