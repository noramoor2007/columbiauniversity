#include <iostream>
// Create a function which validates whether a bridge is safe to walk on (i.e., has no gaps in it to fall through).
bool isSafeBridge (std :: string s) {
	std :: string space = " "; // Create a string variable caled "space" and set it equal to an empty string. This will be used to identify the spaces in the string.
	for (int i = 0; s [i] != '\0'; i++) { // This for-loop declares an integer variable "i" and sets it equal to 0 and the loop will continue to repeat and execute until it is no longer possible for the value in the string "s" will index "i" to actually exist as a value (probably because "i" is out of the range of possible index values in the string s).
		while (s [i] != space [0]) { // Embedded while-loop that checks if while the value in the string "s" with an index of "i", which in the first iteration of the for-loop is equal to 0, is not equal to the " ", then go to the next index possible value that "i" could be by incrementing "i". Until “s [i]” is equal to the "", the while-loop will repeat itself.
			i++;
		}
	}
	return true; // If the while-loop ends, then the for-loop will be iterated over again, until it has to stop, and then the return function will have to return "true".
}