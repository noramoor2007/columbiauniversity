#include <iostream>
// Create a function that takes in a word and determines whether or not it is plural. A plural word is one that ends in "s".
bool isPlural (std :: string word) {
	std :: string s = "s"; // Create a new variable called "s" that stores the letter "s", so that the object type can match the object in the if-statement that is retrieved by stating its index with brackets.
	if ((word [word.size () - 1]) == s [0]) { // If the "s" was not like "s [0]" then it would be an invalid operand to the binary expression.
		return true;
	}
	else {
		return false;
	}
}