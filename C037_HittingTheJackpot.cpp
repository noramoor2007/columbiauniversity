// Create a function that takes in an array (slot machine outcome) and returns true if all elements in the array are identical, and false otherwise. The array will contain 4 elements.
bool testJackpot (std :: vector <std :: string> result) {
	for (int i = 0; i < result.size (); i++) { // This is a for-loop that creates the counter variable called "i" equal to 1. It is less than the result size.
		if (result [i] != result [0]) { // This if-statement checks if the result value with an index of "i" is not equal to the value with an index of 0.
      return false;
		}
	}
	return true;
}
