#include <iostream>
// Create a function that determines whether a number is Oddish or Evenish. A number is Oddish if the sum of all of its digits is odd, and a number is Evenish if the sum of all of its digits is even. If a number is Oddish, return "Oddish". Otherwise, return "Evenish". For example, oddishOrEvenish(121) should return "Evenish", since 1 + 2 + 1 = 4. oddishOrEvenish(41) should return "Oddish", since 4 + 1 = 5.
std :: string oddishOrEvenish (int num) {
	int sum = 0; // An integer variable called "sum" is declared and set equal to 0.
  while (num != 0) { // This while loop runs as long as "num" is not equal to 0.
	  sum += (num % 10); // While this is true, the "sum" is set equal to the "sum" plus the number mod 10.
	  num /= 10; // And then the number is set equal to the number divided by 10.
  }
	if (sum % 2 == 0) { // This if-statement checks if the "sum" mod 2 is equal to 0, which is just checking if it is even or not.
		return "Evenish"; // So if it is even, then the function, "oddishOrEvenish" will return "Evenish".
	}
	else { // If the conditions are not met in the if-statement, then this else-statement is executed.
		return "Oddish"; // It will return "Oddish".
	}
}
