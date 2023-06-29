#include <iostream>
// A taxi journey costs $3 for the first kilometer travelled. However, all kilometers travelled after that will cost $2 each. Create a function which returns the distance that the taxi must've travelled, given the cost as a parameter.
int journeyDistance (int num) {
	if ((num - 3) >= 0) { // If the cost minus $3 is greater than or equal to 0 then we know that we can get an answer from this.
		return (1 + ((num - 3) / 2)); // This returns 1 from the $3 plus the cost minus $3 divided $2 so we can know the kilometers travelled with the remaining money divided by 2.
	}
}