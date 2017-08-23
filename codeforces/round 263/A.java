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
		ArrayList<String> grid = new ArrayList<String>();

		for (int i = 0; i < n; i++) {
			grid.add(cin.next());
		}

		for (int i = 0; i < n; i++) {

			for (int j = 0; j < n; j++) {
				int o = 0;
				if (i + 1 < n && grid.get(i + 1).charAt(j) == 'o')
					o++;
				if (j - 1 >= 0 && grid.get(i).charAt(j - 1) == 'o')
					o++;
				if (j + 1 < n && grid.get(i).charAt(j + 1) == 'o')
					o++;
				if (i - 1 >= 0 && grid.get(i - 1).charAt(j) == 'o')
					o++;

				if (o % 2 != 0) {
					System.out.println("NO");
					return;
				}

			}

		}

		System.out.println("YES");

	}
}