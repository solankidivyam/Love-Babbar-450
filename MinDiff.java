package ArrayBasics;

import java.util.Arrays;

public class MinDiff {

	public static void main(String[] args) {
		int[] a = { 4, 6, 8 };
		System.out.println(min_diff(a, 3));
	}

	public static int min_diff(int[] a, int k) {
		if (a.length == 1)
			return 0;

		Arrays.sort(a);
		int ans = a[a.length - 1] - a[0];
		int small = a[0] + k;
		int big = a[a.length - 1] - k;

		if (big < small) {
			int t = small;
			small = big;
			big = t;
		}

		for (int i = 1; i < a.length - 1; i++) {
			int add = a[i] + k;
			int sub = a[i] - k;

			if (add <= big || sub >= small)
				continue;

			if (big - sub <= add - small)
				small = sub;
			else
				big = add;
		}
		return Math.min(ans, big - small);
	}

}
