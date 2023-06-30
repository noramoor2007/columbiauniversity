#include <iostream>
// Create a function that takes in an array (slot machine outcome) and returns true if all elements in the array are identical, and false otherwise. The array will contain 4 elements.
bool testJackpot (std :: vector <std :: string> result) {
	for (int i = 0; i < result.size (); i--) {
		if (result [i] != result [i + 1]) {
			return false;
		}
	}
	return true;
}