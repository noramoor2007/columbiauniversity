#include <stdio.h>
int findMax (int arr [], int size) { // I create a function called "findMax" that takes an integer array and an integer called "size" as parameters.
  int max = arr [0];
  for (int i = 1; i < size; i++) {
    if (arr [i] > max) {
      max = arr [i];
    }
  }
  return max;
}
int main () {
  int numbers [5]; // This here defines how "numbers" has a size of 5.
  printf ("Please enter 5 random integers:\n"); // This here prints "Please enter 5 random integers:", so that the user can input 5 numbers themselves. This "printf" means print function and the function returns an integer so that is what is also expected of the user to input 5 integers and not anything else.
  for (int i = 0; i < 5; i++) { // This for-loop creates "i", a counter variable that is set equal to 0, and is less than 5, which is the size of the integer array. It does not matter whether "i" is equal to 0 or to 1 because if it was equal to 0 that would just make it compare it with itself.
    scanf ("%d", &numbers [i]); // While the for-loop's conditions are met, the code will read the formatted input from the "stdin", according to Replit. The "%d" is used for integers when using "scanf". The "scanf" function requires the memory address where it can store the value entered by the user. By using the address-of operator, "&", we provide the function with the location in memory where the variable "numbers" is stored.
  }
  int max = findMax (numbers, 5); // This assigns the variable "max" to the "findMax" function that takes the "numbers" parameter with a size of 5.
  printf ("The maximum element is %d%s\n", max, "."); // This returns a print statement that says the maximum element.
  return 0; // This returns 0 to finalize the code and make sure everything runs smoothly.
}
