double findLargest(double x[], int size) {
	double largest = x[0];
	for (int i = 0; i < size; i++) {
		if (x[i] > largest) {
			largest = x[i];
		}
	}
	return largest;
}