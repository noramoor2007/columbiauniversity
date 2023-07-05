#include <iostream>
#include <stdio.h>
// Write a C program that finds the maximum element in an array using pointers.
#include <stdio.h>
int findMax (int* arr, int size) {
  int* max = &arr [0]; // The pointer "max" is equal to the memory address of an empty array first.
  for (int i = 1; i < size; i++) { //
    if (arr [i] > *max) { // This compares the values not addresses. This compares the value of the "i"-th element in the array, "arr" to the memory location whose address is in the pointer, "max".
      *max = arr [i];
    }
  }
  return *max; // This returns the max pointer memory location value.
}
int main () {
  int arr [5]  = {}; // This makes an array called "arr" with a known size of 5.
  int size = 5; // Set the "size" equal to 5 because you now know it.
  // int size = 5 / sizeof (arr [0]); You don't need to do all that because you know the size, the size is just 5.
  printf ("Please enter 5 integers: \n");
  for (int i = 0; i < 5; i++) {
    scanf ("%d", &arr [i]);
  }
  int max = findMax (arr, size);
  printf ("The maximum element is %d%s\n", max, "."); // Print "max" because that is what is returned in the "findMax" function, which is what you want to have returned as well.
  return 0;
}