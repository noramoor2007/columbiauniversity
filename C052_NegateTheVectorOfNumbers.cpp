#include <iostream>
// Given a vector of numbers, negate all elements contained within. Negating a positive value -+n will return -n, because all +'s are removed. Negating a negative value --n will return n, because the first - turns the second minus into a +.
std :: vector <int> negate (std :: vector <int> vi) {
	for (int i = 0; i < vi.size (); i++) { // This for-loop creates a variable integer "i" that is set to 0 and less than the size of the array.
		if (vi [i] < 0) { // This checks if the "i"-th element in the array is less than 0.
			vi [i] = -vi [i]; // If it is, then change the value of that element to the negative version of it.
		}
		else if (vi [i] > 0) { // If that doesn't work then check if the "i"-th element is greater than 0.
			vi [i] = -vi [i]; // If that is true, then negate that as well.
		}
		else { // If that doesn't work then set the "i"-th element to 0;
			vi [i] = 0;
    }
  }
  return vi; // Return the array.
}