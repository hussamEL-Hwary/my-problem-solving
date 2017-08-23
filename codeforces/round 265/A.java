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
		int r1 = 0, r2 = 0;
		int n = cin.nextInt();
		for (int i = 0; i < n; i++) {
			int m = cin.nextInt();
			int c = cin.nextInt();
            if(m>c)
            	r1++;
            else if(c>m)
            	r2++;
		}
		if (r1 > r2)
			System.out.println("Mishka");
		else if (r1 < r2)
			System.out.println("Chris");
		else
			System.out.println("Friendship is magic!^^");

	}
}