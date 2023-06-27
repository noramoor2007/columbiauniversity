#include <iostream>
// Given a pH value, return whether that value is "alkaline" (greater than 7), "acidic" (less than 7), or "neutral" (7). Return "invalid" if the value given is less than 0 or greater than 14.
std :: string pHName (float pH) { // This is where it declares the function "pHName" that takes one float parameter, "pH", which is a floating-point value, and returns a string. The "std::string" indicates that the function will return a string from the C++ Standard Library (std).
  if (pH > 7 && pH <= 14) { // This if-statement checks if the pH value is greater than 7, but also less than or equal to 14.
		return "alkaline"; // If this condition evaluates to "true", the function will return the string value, "alkaline".
	}
	else if (pH < 7 && pH >= 0) { // If the conditions of the above if-statement are not met and are "false", then this else-if statement checks if the pH is less than 7 but also greater than or equal to 0.
		return "acidic"; // If this condition is "true", then the function will return the string "acidic".
	}
	else if (pH == 7) { // This condition check if the pH value is exactly equal to 7.
		return "neutral"; // If "true", then the function will return the string "neutral".
	}
	else { // If none of the above conditions have been satisfied, it means that the pH value is either less than 0 or more than 14, or not a number, or in this case, a float.
		return "invalid"; // As a result the function will return the string "invalid".
	}
	return 0; // Eventhough it is sometimes required in C/C++ code, this line is not actually needed because the function is not even meant to return an integer, it is supposed to return a string. In general, the line "return 0;" is typically used in C++ to indicate successful program termination. In the context of a "main()" function, "return 0;" is commonly used to indicate that the program has executed without any errors.
}