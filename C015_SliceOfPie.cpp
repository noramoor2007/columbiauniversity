#include <iostream>
// Create a function that determines whether or not it's possible to split a pie fairly given these three parameters, total number of slices, number of recipients, and how many slices each person gets. The function will be in the form, "equalSlices(total slices, no. recipients, slices each)".
bool equalSlices (int total, int people, int each) {
	if (people * each > total) {
		return false;
	}
	return true;
}