package ArrayBasics;

import java.util.Arrays;

public class DutchNF {

	public static void main(String[] args) {
		int[] a = { 2, 0, -2, 1, -2, 0, 1 };
		System.out.print(min_diff(a, 2));
		// for (int i = 0; i < a.length; i++) {
		// System.out.print(a[i] + " ");
		// }
	}

	public static int sum(int[] a) {
		int max_so_far = Integer.MIN_VALUE, max_ending = 0;
		for (int i = 0; i < a.length; i++) {
			max_ending += a[i];
			if (max_so_far < max_ending)
				max_so_far = max_ending;
			if (max_ending < 0)
				max_ending = 0;
		}
		return max_so_far;
	}

	public static int min_diff(int[] a, int k) {
		if (a.length == 1)
			return 0;

		Arrays.sort(a);
		int ans = a[a.length - 1] - a[0];
		int small = a[0] + k;
		int big = a[a.length - 1] - k;

		if (big < small) {
			int t = big;
			big = small;
			small = t;
		}

		for (int i = 1; i < a.length - 1; i++) {
			int add = a[i] + k;
			int sub = a[i] - k;

			if (sub >= small || add <= big)
				continue;

			if (add - small >= big - sub)
				small = sub;
			else
				big = add;
		}
		return Math.min(big - small, ans);
	}

	public static void sort(int[] a) {
		int lo = 0, mid = 0, hi = a.length - 1;
		while (mid <= hi) {
			if (a[mid] == 0) {
				swap(a, mid, lo);
				mid++;
				lo++;
			} else if (a[mid] == 1)
				mid++;
			else {
				swap(a, mid, hi);
				hi--;
			}
		}
	}

	public static void swap(int[] a, int i, int j) {
		int t = a[i];
		a[i] = a[j];
		a[j] = t;
	}
}
