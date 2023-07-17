#include <iostream>
// Create a function that takes a vector (array) of strings. Return all words in the vector (array) that are exactly four letters.
std :: vector <std :: string> isFourLetters (std :: vector <std :: string> arr) {
	std :: vector <std :: string> result;
  for (int i = 0; i < arr.size (); i++) { // This for-loop says that the index "i" is less than the array's size minus 1. Then after each iteration of the for-loop "i" is incremented by 1.
    if (arr [i].size () == 4) { // If the array element with an index "i" has a size of 4, then use the push_back function "arr [i]".
      result.push_back (arr [i]); // The "push_back ()" function is used to push elements into a vector from the back.
    }
  }
  return result; // Then return the result.
}