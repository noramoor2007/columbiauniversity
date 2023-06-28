#include <iostream>
// Write a function that checks whether a person can watch an MA15+ rated movie. One of the following two conditions is required for admittance. The person is at least 15 years old. They have parental supervision. The function accepts two parameters, age and isSupervised. Return a boolean.
bool acceptIntoMovie (int age, bool isSupervised) {
	if (age >= 15) { // This checks if the inputted age is greater than or equal to 15.
		if (isSupervised == true) { // This is an embedded if-statement, which means that if the above if-statement is met, then it goes on to check in addition to the age if "isSupervised" is "true".
			return true; // If this evaluates to "true", then the function, which is meant to return a boolean, will return "true".
		}
		return false; // If that if-statement that is embedded is not true, then that must mean they are automatically not qualified.
	}
}