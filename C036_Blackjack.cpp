#include <iostream>
// Create a function that takes an array of card numbers and checks if the sum of their value exceeds 21. If the sum exceeds 21, return true and if the sum is under or equal to 21, return false. For the values of the cards, 2-10 are their value, J-K (face cards) count as 10, and Aces count either as 1 or 11 - play conservatively, so that if giving an Ace a value of 11 causes you to lose and 1 allows you to win, then go with 1.
bool overTwentyOne (std :: vector <char> cards) { // Here "cards" is a vector of character.
	bool checker;
	int totalval = 0; // An integer variable called "totalval" that represents the total card value.
	for (char cardface : cards) { // This iterates over each element "cardface" in the "cards" vector. Here is a for-loop that is like a in-range for-loop, so it is like so, for char variable "cardface" in range of "cards".
		if (cardface >= '2' && cardface <= '9') { // This checks if the "cardface" is a number between '2' and '9' because cards with the numbers 2 through 9 have a face value that is equal to the card value itself, and the other cards, 'A', 'J', 'Q', and 'K', have card values of '1', '10', and '11'. Remember char values have to be in single-quotation marks, not double. The "cardface" variable is compared with the character values to determine if it falls within this range.
			// All characters are represented as integers. They each have an ASCII value. For characters that are digits, they are ordered sequentially. '0' has an ASCII value of 48, '1' has a value of 49, and so on so forth.
			// When subtracting '0' from the char variable "cardface", you are subtracting the integer value of '0' from the integer value of "cardface". If "cardface" was '3', it has an integer value of 51, so the operation would be 51 - 48, leaving you with the integer value 3.
			totalval += cardface - '0';  // After converting the char into its corresponding integer value, the "cardface" is now a number. This is possible because the character values '2' to '9' are consecutive in ASCII, so it is like '2', '3', '4', '5', '6', '7', '8', and '9'. The resulting value is then added to "totalval" to calculate the total value of the cards.
			if (totalval <= 21) {
				checker = false;
			}
			else {
				checker = true;
			}
		}
		else if (cardface == 'A') { // However if the char variable "cardface" is not greater than or equal to 2 and not less than or equal to 9, that means that it is not a number/digit char. This checks if "cardface" is equal to the char 'A' (if it is an Ace), which would make the condition true if it is.
			totalval += 1; // By setting the ace value equal to 1, that avoids busting (when a total value of a player's hand exceed 21).
			if (totalval <= 21) {
				checker = false;
			}
			else {
				checker = true;
			}
		}
		else { // If none of the previous conditions are true, this else-block is executed, indicating that the "cardface" is a face card (J, Q, K).
			totalval += 10;
			if (totalval <= 21) {
				checker = false;
			}
			else {
				checker = true;
			}
		}
	}
	return checker;
}