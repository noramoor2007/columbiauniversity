#include <stdio.h>
// Spider-Man needs to calibrate his web-shooters to ensure the accuracy and strength of his web-slinging abilities. Help Spider-Man by writing a C program that calculates the average strength of his web-shooters using a function, called "calculateAverageStrength". Define a function named "calculateAverageStrength" that takes an array of integer parameters representing the strength values of Spider-Man's web-shooters. The function should return the average strength as a floating point value. In the main fucntion, create an array of integer values representing the strength measurements. Call the "calculateAverageStrength" function, passing the array of strength measurements. Print the average strength of Spider-Man's strength of web-shooters in the main function with two decimal places.
float calculateAverageStrength (int strengths [], int size) { // This is the function definition. Why do you need to make an "int size" variable?
  int sumofstrengths = 0; // This variable will store the sum of all the strengths listed in the given array all together. It is currently set to 0.
  for (int i = 0; i < size; i++) { // This for-loop creates "i", which is equal to 0 and is less than the "size" parameter variable. I guess the size is not something we calculate on our own. Is it really necessary though?
    sumofstrengths += strengths [i]; // In the for-loop we set "sumofstrengths" equal to the "sumofstrengths" plus the value in the "strengths" array with an index of "i", which is less than the "size". We can assume that "size" is the same as "strengths.size ()".
  }
  return (float) sumofstrengths / size; // Once "i" can no longer be less than the size, then the function will return the sumofstrengths divided by the size which gives you the average, but remember that the program wants it to be a float. So think about it this way, you have two integers, you divide them by each other but it does not give you a whole number it gives you a decimal, so in order to keep the decimal you must state its datatype, which would be of a floating-point kind, also know as a float, so you put "float" in parenthesis, before the thing you want as a float value.
}
int main () { // Then we have the main function, which is where the source code in the "calculateAverageStrength" method begins its execution.
  int size;
  printf ("How many strength measurements do you want to input? ");
  scanf ("%d", &size);
  int strengthmeasurements [size];
  printf ("Please input values for each strength measurement: \n");
  for (int i = 0; i < size; i++) {
    scanf ("%d", &strengthmeasurements [i]); // You have to ask for each individual value and store each value individually into "strengthsmeasurements" with their own indexes. If you don't include the "[i]" then all them get stored in the same value and the last value inputted by the user is the number you will get returned.
  }
  float resultaverage = calculateAverageStrength (strengthmeasurements, size); // This creates a variable that is of a float datatype called "resultaverage" and it basically plugs in the numbers from strengthmeasurements and size into the calculateAverageStrength function.
  printf ("The average strength of Spider-Man's web-shooter is %.2f.", resultaverage); // The "%f" is called a format specifier. This rounds to the two last decimal values.
  return 0;
}