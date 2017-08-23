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
		int t25 = 0, t50 = 0;
		boolean found = true;
		for (int i = 0; i < n; i++) {
			int num = cin.nextInt();
			if (num == 50) {
				if (t25 > 0) {
					t25--;
					t50++;

				} else
					found = false;
			} else if (num == 100) {
				if (t25 > 0 && t50 > 0) {
					t25--;
					t50--;
				} else if (t25 >= 3) {
					t25 -= 3;
				}
				else found = false;
			} else
				t25++;
		}
		if (found)
			System.out.println("YES");
		else
			System.out.println("NO");

	}
}