// Implement a function findMax () that takes an integer array as input and returns the maximum element from the array.
#include <stdio.h> // The "<stdio.h>" provides access to varous things like the "printf" output function, which is used for reading input from the user and writing output to the console.
int findMax (int arr [], int size) { // Here we declare a function called "findMax" that takes two integer parameters, one that is an array named "arr []" and the other that is just an integer variable and is named "size". This function will return an integer.
  int max = arr [0]; // Because the goal is to find the maximum, we must make a variable for that named "max" that is an integer variable equal to the value in index 0 of "arr []". The reason why is because the most common way of finding an answer to something like this requires us to write an array in order from max to min, and from that take the maximum element out of all, which would be in the 0th index.
  for (int i = 1; i < size; i++) { // This for-loop declares a variable "i" set equal to 1, and "i" is less than the "size". The "size" variable parameter is necessary because then the code will know how many elements it has to check through to find the max of the array of integers. I think that the reason why "i" is set equal to 1 is because the "max" variable is set equal to an index of 0, so we are basically comparing the values. Also "i" is less than the size because the size in the main function is the number in the brackets before the equals sign and does not take into account index number.
    if (arr [i] > max) { // This if-statement checks if the value with an index of "i" in the array is greater than the max.
      max = arr [i]; // If it is, then set "max" equal to "arr [i]". Note that this is not permanently setting "max" equal to that because the for-loop will continue running until that condition in the middle of the for-loop statement is not true anymore.
    } // Also remember if something you are comparing the max to is less, the loop will still run because "i" will still be less.
  }
  return max; // Now that we have gone through the entire array and found the max.
}
int main () { // This main function contains the program's primary logic and what is really required for the code's execution.
  int numbers [5] = {5, 10, 15, 20, 25}; // These are the numbers of the dataset we want to find the max value of. This is an integer array, basically an array of integers. It is named "numbers" and has a size of 5. It is important to include the size because even if you had a size larger than the actual number of elements you included in the curly braces the extra elements that were not included will automatically be set equal to 0.
  int max = findMax (numbers, 5); // Here the "findMax" function is called, passing the numbers array and the size of the array as arguments, which is 5. The "max" variable is assigned the value returned by the function, "findMax", which is the max element in the "numbers" array. Including the "5", which is the size of the dataset, that tells the function how many elements it should be considering when determining the maximum value. The 5 indicates the size of the array.
  printf ("The maximum element is: %d\n", max); // This "printf" statement is actually just supposed to print the function's output which is an integer. Speaking of which, because the "max" is an integer variable the "%d" indicates than an integer will be outputted in that position in the code. If that was not included then you would get an error because you can concatenate an integer and a string together into a print statement.
  return 0; // The return 0 here is important, to show that the code will run successfully.
}