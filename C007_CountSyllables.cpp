#include <iostream>
// Create a function that counts the number of syllables a word has. Each syllable is separated with a dash "-".
int numberSyllables (std :: string word) {
	// You can track the number of syllables by adding one to the number of dashes that pop up in the entire string.
	// If you tried to assign a char variable to "-" (char dash = "-";) it would give you an error because you are trying to initialize a char variable (dash) with a string literal "-", which has a type of const char [2]. That's why you need to make it a string because strings are declared using the quotation marks.
	std::string dash = "-"; // The character dash will be stored in a char variable called "dash".
	int freq = 0; // The number of times the dash comes up will be stored in a variable called "freq", which is currently set equal to 0.
	// The for-loop below is basically doing the following. So, we have an integer variable called "i" and it is equal to 0. Additionally, the character in the string "word" that has an index of "i", which right now is equal to 0, is not null, so there has to be a character in that position, 0. Then, when we continue within the for-loop, we have an if-statement that says that checks if the character in the string "word" with an index of i, which is still 0, is the dash character, "-", then, increment the "freq" variable, which just simply means, add one to it. Now we know that there is at least one occurence of a dash in this string "word", suggesting already two syllables.
	for (int i = 0; word [i] != '\0'; i++) { // '\0' is the null character, which marks the end of a string. I think that this null character is required to be represented in single-quotation marks and not double.
		// If you did this for the if-statement (if (word [i] == dash) {) you would get an error because accessing the first character of dash using [0] is necessary in this case to match the types of the operands and perform a valid comparison between a single character and a string containing a single character. In the given code, dash is declared as a std::string variable, but it contains only a single character "-", which is represented as a string of length 1.
		if (word [i] == dash [0]) { // Using single equal sign is for assignments, double equal signs are for comparison.
			freq++; // This will keep going through the string by incrementing the value of "i" until we have gone through the entire string and if we continued, it would not meet the requirements in the for-loop of a character with an index of "i" actually existing in the string and not equal to null.
		}
	}
	return freq + 1; // The plus 1 is there because the syllables are separated by the dashes and so there will always be one more syllable than the number of dash occurrences in the code. It is important that the return statement is not placed inside the loop because that would cause the function to return prematurely after the first iteration of the loop. As a result, the value of freq would never be incremented beyond its initial value of 0.
}