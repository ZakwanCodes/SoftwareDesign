#pragma once
template<typename T>
T sortFunc(T arr[], int size) {
	T maxElt = arr[0];
	for (int i = 0; i < size; i++) {
		if (maxElt < arr[i]) maxElt = arr[i];
	}
	return maxElt;
}