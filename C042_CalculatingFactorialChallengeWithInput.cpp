#include <iostream>
// Write a C program that calculates the factorial of a given number using a function. The factorial of a number is the product of all positive integers less than or equal to that number. Define a function named "factorial" that takes an integer parameter "n" and returns the factorial of n. Implement the factorial caluclation using a loop inside the factorial function. Call the "factorial" function from the "main" function with a user-defined number. Print the result in the main function.
// A class is a blueprint for defining objects in your code. An object is an instance of a class, a copy of your class. 
int factorial (int n) {
  int factorial1 = 1; // This is the start of the function body.
  for (int i = 1; i <= n; i++) { // Factorial can work forwards and backwards. This calculates the factorial using a for-loop.
    // for (int i = n; i >= 1; i--) {
    factorial1 *= i; // This is how factorial works and the loop will continue running until "i"is no longer less than or equal to "n".
  }
  return factorial1;
}
int main () {
  int number;
  std :: cout << "Please input an integer: ";
  std :: cin >> number; // "cin" stands for character input, and this is basically asking the user for input and storing it into the "number" variable.
  int result = factorial (number);
  std :: cout << "Factorial of " << number << " is " << result << std :: endl;
  return 0;
}
