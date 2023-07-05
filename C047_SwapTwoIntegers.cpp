#include <iostream>
#include <stdio.h>
using namespace std;
// Write a C program that swaps two integers using pointers.
void swap (int* a, int* b) { // We receive to pointers as argument and they point to the memory locations of the variables x and y in the main function. We use pointer dereferncing *a and *b to access the values stored at those memory locations.
  int temporaryvar = *a; // This creates a variable called "temporaryvar" that is equal to the pointer variable "a".
  *a = *b; // Then you swap the value of the two pointer variables, "a" and "b".
  *b = temporaryvar; // THen you swap the value from the temporary vairbale to memory location "b". Now the temporary variable which was once equal to "*a", which was then switched to "*b" is now swapped to the value of "*b" is gvien the value of the temporary variable, equal to "*a".
}
int main () {
  int x, y; // This creates two variables that connect to the "a" and "b" in the "swap" method.
  printf ("Please input an integer: ");
  scanf ("%d", &x);  
  printf ("Please input a second integer: ");
  scanf ("%d", &y);
  printf ("\x1b[4mBefore Swap\x1b[0m: \x1b[91mx\x1b[0m = %d and \x1b[94my\x1b[0m = %d.", x, y);
  swap (&x, &y); // This swaps their memory address.
  printf ("\x1b[4m\nAfter Swap\x1b[0m: \x1b[91mx\x1b[0m = %d and \x1b[94my\x1b[0m = %d.", x, y); // The y and x actually don't need to be swapped, because "swap" is already implemented.
  std :: string yesorno;
  /*
  printf ("\nWould you like to know how this code works? ");
  scanf ("%d", &yesorno);
  if (yesorno == "yes") {
    printf ("Hello");
  }
  else if (yesorno == "no") {
    printf( "test");
  }
  */
  return 0;
}