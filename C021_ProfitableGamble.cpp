#include <iostream>
// Create a function that takes three arguments prob, prize, pay and returns true if prob * prize > pay; otherwise return false. To illustrate, "profitableGamble(0.2, 50, 9)" should yield true, since the net profit is 1 (0.2 * 50 - 9), and 1 > 0.
bool profitableGamble (float prob, int prize, float pay) {
	if (prob * prize > pay) {
		return true;
	}
	else {
		return false;
	}
}