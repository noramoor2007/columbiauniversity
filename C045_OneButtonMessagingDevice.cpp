#include <iostream>
// Imagine a messaging device with only one button. For the letter A, you press the button one time, for E, you press it five times, for G, it's pressed seven times, etc. Write a function that takes a string (the message) and returns the total number of times the button is pressed.
int howManyTimes (std :: string msg) {
	int tot = 0; // This is an integer variable called "tot" and it is set equal to 0, and is how I will store the total number of times the button is pressed.
	for (int i = 0; i < msg.size (); i++) { // This for-loop creates variable "i" which is set equal to 0 and is less than the size of the message, "msg", and everytime the loop iterates, 1 is added to the value of "i".
		tot += msg [i] - '`'; // Everytime the loop runs the value of "tot" is changed and because the characters in the message string are all type char, you can take its corresponding ASCII value and subtract the ASCII value of "`" from it, which is 96. The starting value for lower case letters in ASCII values is 97, so "a" would be 1. We set the total value equal to the total value plus that.
	}
	return tot; // After that we return the total.
}