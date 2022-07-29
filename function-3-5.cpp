#include <iostream>
double sum_even(double array[], int n) {
	int sum = 0;
	if (n < 1)
		return 0;
	for (int index = 0; index < n; index += 2)
		sum += array[index];
	return sum;
}