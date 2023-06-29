#include <iostream>
using namespace std;
// Create a function that finds how many prime numbers there are, up to the given integer.
// This code uses the Sieve of Eratosthenes algorithm to find and count prime numbers up to the given input num. It marks composite numbers by setting their corresponding array elements to 0, and counts the remaining non-zero elements in the array as prime numbers.
int primeNumbers (int num) { // Defines a function called "primeNumbers" that takes an integer as input and gives an integer(s).
	int numbers [num]; // This declares an integer array called "numbers" with a size of "num". It will be used to store numbers for checking primality.
	for (int i = 0; i < num; i++) { // This for-loop initializes the "numbers" array with numbers from 1 to "num". Each element of the array is assigned the value of "i+1".
		numbers [i] = i + 1;
	}
  int checker = 2; // This line initializes the "checker" variable to 2. It represents the current number being checked for primality.
	while (true) {
	  int i = checker; // This line initializes the variable "i" with the value of checker. It represents the number being multiplied by checker to mark composite numbers.
		while (true) {
			i += checker; // This line increments "i" by the value of checker in each iteration.
			numbers [i - 1] = 0; // This line sets the element at index "i-1" in the numbers array to 0. It marks the number as composite.
			if (i > num) { // If "i" exceeds the value of num, the inner while loop is terminated with a break statement.
				break;
			}
		}
		bool finished = false; // This line initializes the finished variable as false. It indicates whether the loop for finding the next checker is complete.
	  for (int j = checker; j < num; j++) { // This for-loop starts from "checker" and iterates through the remaining numbers in the "numbers" array.
			if (numbers [j] != 0) { // If the element at index "j" in the "numbers" array is not equal to 0, it means the number is still unmarked and potentially prime.
				checker = numbers [j]; // This line updates the "checker" variable with the next unmarked number.
				finished = true; // This line sets finished to true since we found the next checker.
				break;
			}
		}
		if (finished == false) { // If finished is still false after the loop, it means there are no more unmarked numbers, and the outer while-loop is terminated with a break statement.
			break;
		}
	}
	numbers [0] = 0; // This line sets the first element of the "numbers" array to 0, marking 1 as a composite number.
	int amount = 0; // This line initializes the "amount" variable to 0. It will be used to count the number of primes.
	for (int k = 0; k < num; k++) { // This for-loop iterates through the "numbers" array.
		if (numbers [k] != 0) { // If the element at index "k" in the "numbers" array is not equal to 0, it means the number is not marked as composite and is therefore prime.
			amount += 1; // Increment the "amount" variable by 1 to count the prime number.
		}
	}
	return amount;
}