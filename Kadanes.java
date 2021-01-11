package ArrayBasics;

public class Kadanes {

	public static void main(String[] args) {
		int[] a = { 2, -4, 2, 0, -5, 1 };
		System.out.print(find_sum(a));
	}

	public static int find_sum(int[] a) {
		int sum_so_far = Integer.MIN_VALUE, sum_ending = 0;
		for (int i = 0; i < a.length; i++) {
			sum_ending += a[i];
			if (sum_so_far < sum_ending)
				sum_so_far = sum_ending;

			if (sum_ending < 0)
				sum_ending = 0;
		}
		return sum_so_far;
	}

}
