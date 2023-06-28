#include <iostream>
// Take an array of integers (positive or negative or both) and return the sum of the absolute value of each element.
int getAbsSum (std :: vector <int> arr) { // A vector is a type of data structure.
  int result = 0; // Sum of all values will start at 0. This position is where you start in the for-loop. You do ".size ()" minus 1, and that gives you a number that is the same as the index of the last value in the array.
  for (int i = 0; i < arr.size (); i++) {
    if (arr [i] < 0) { // If some value in the array is a negative number it will be multiplied by -1 to make it positive because the negatives cancel each other out.
      arr [i] *= (-1);
    }
    result += arr [i]; // The "result" variable is equal to your result plus the value with an index of "i", so now your result has the first number in the array, whose absolute value has been evaluated, added to it. This ultimately provides you with the sum of the absolute values of all these numbers.
  }
  return result;
}
