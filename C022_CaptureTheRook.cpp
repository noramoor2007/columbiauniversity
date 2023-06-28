#include <iostream>
// Write a function that returns true if two rooks can attack each other, and false otherwise.
bool canCapture (std :: vector <std :: string> pieces) {
	if ((pieces [0] [0] == pieces [1] [0]) || (pieces [0] [1] == pieces [1] [1])) { // Don't forget to use separate square-brackets when taking the index of a character or element within an element of an array.
		return true;
	}
		return false;
}