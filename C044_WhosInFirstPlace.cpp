#include <iostream>
// Create a function that takes a string road and returns the car that's in first place. The road will be made of "=", and cars will be represented by letters in the alphabet.
char firstPlace (std :: string road) {
	for (int i = road.size () - 1; i >= 0; i--) { // This for-loop sets variable integer "i" equal to the "road" variable size minus 1, so it is now the index of the last character in the string. Then from that, we set "i" equal to greater than or equal to 0, so that the loop will continue running until "i" is no long greater than or equal to 0. Additionally, we decrement "i", so that whenever we iterate through the loop, we change the index of "i" to an index that is 1 less.
		if (road [i] != '=') { // During the loop, we check if a value in the string "road" with an index of "i" is equal to "=", which is pretty much the only thing we can actually check. If it is not, then we return the value at index "i" in "road".
			return road [i]; // Return statement here, explained above.
		} // If that doesn't work then exit out of the if-statement.
	}
	return '0'; // And return 0. Remember that 0 has to be in char form, so it has to be '0'.
}