#include <iostream>
// A palindrome is a word that is identical forward and backwards, such as mom, racecar, and kayak. Given a word, create a function that checks whether it is a palindrome.
bool checkPalindrome (std :: string str) {
	bool checker;
	for (int i = 0; i <= (str.size () - 1); i++) { // The "i" represents the string's characters from index 0 to the end.
		for (int j = 0; j <= (str.size () - 1); j--) { // The "j" represents the string's characters from the last index to index 0.
			if (str [i] == str [j]) {
				checker = true;
			}
			else {
				checker = false;
			}
		}
	}
	return checker;
}