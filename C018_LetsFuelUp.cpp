#include <iostream>
// A vehicle needs 10 times the amount of fuel than the distance it travels. However, it must always carry a minimum of 100 fuel before setting off. Create a function which calculates the amount of fuel it needs, given the distance.
function calculateFuel(n) {
	while (n < 10) {
		return 100;
	}
	return n * 10;
}