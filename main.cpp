#include <iostream>

std :: vector <int> sortNumsAscending (std :: vector <int> arr) {
  int temp = 0; /* This integer "temp" variable is a temporary variable. */
	for (int i = 0; i < arr.size () - 1; i++) { /* If the initial value is less than the "arr.size ()" minus 1, then you have to move through the values one by one, incrementing through. */
		for (int j = 0; j < arr.size () - i - 1; j++) { /* Here is a for-loop that says that "i" is less than "arr.size ()" minus 1. You are comparing the last two numbers, by incrementing it by adding one. */
			if (arr [j] > arr [j + 1]) { /* Condition that checks if the value at position "j" is greater than the value at position "j + 1" and you keep adding 1 to "i" or "j" until it is greater than the next value. */
				temp = arr [j]; /* Then you set one equal to the other that is greater or smaller. */
				arr [j] = arr [j + 1];
				arr [j + 1] = temp;
			} 
		}
	}
	return arr;
}