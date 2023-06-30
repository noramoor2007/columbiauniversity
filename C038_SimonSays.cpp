#include <iostream>
// Create a function that takes in two arrays and returns true if the second array follows the first array by one element, and false otherwise. In other words, determine if the second array is the first array shifted to the right by 1.
bool simonSays (std :: vector <int> arr1, std :: vector <int> arr2) {
	for (int i = 1; i < arr1.size (); i++) { // Set "i" equal to 1 because for "arr2" the value at index 1 is the value in "arr1" in index 0. Also because the something with an index of 0 in "arr2" does not exist in "arr1" because it is out of the bounds of "arr1" indices.
		if (arr1 [i - 1] != arr2 [i]) { // This checks if the value in "arr1" with an index of "i" minus 1, which is 0, is not equal to the value in "arr2" that has an index of "i", which is 1. It does, so this if-statement's conditions have not been met.
			return false; // If it happens to be true, then return false.
		}
		else {
			continue;
		}
	}
	return true;
}
