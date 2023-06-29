#include <iostream>
// This challenge is based on the classic videogame "Snake". Assume the game screen is an n * n square, and the snake starts the game with length 1 (i.e. just the head) positioned on the top left corner. In this version of the game, the length of the snake doubles each time it eats food (e.g. if the length is 4, after eating it becomes 8). Create a function that takes the side n of the game screen and returns the number of times the snake can eat before it runs out of space in the game screen.
int snakefill (int x) { // This creates a function called "snakefill" that takes an integer value stored in "x" and return an integer value.
  int max = x * x; // The total number of squares is equal to the length squared. We know that the game has a field size of the input number squared, so why not make a variable for that.
  int sum = 1; // This sum variable represents the snakes initial length, which is just its head.
  int numberoftimes = 0; // Let's make a variable set equal to 0 that keeps track of the number of times the snake could possibly eat.
  while (sum <= max) { // This while loop continues until the sum exceeds the maximum. It checks if the current sum (the length of the snake) is still within the game screen.
    sum += sum; // Within the loop the sum is doubled by setting the "sum" equal to itself plus itself, this simulates the snake doubling its length whenever it eats.
    if (sum <= max) { // If the sum is less than or equal to the maximum area.
			numberoftimes++; // Then, we bring in the "numberoftimes" variable and we increment it by 1, and while the "sum" is still less than or equal to maximum, that means that because we tracked the snakes doubling with the sum, we know that everytime it doubles or everytime the sum is added to sum as long as it is still less than the maximum, we count each time as a time it has eaten.
		}
	}
  return numberoftimes; // Once the sum has reached its limit and can no longer be equal to or less than the max, the function returns an integer, which in this case is stored in the variable, "numberoftimes".
}