#include <iostream>
#include <algorithm>
// You work in a toy car workshop, and your job is to build toy cars from a collection of parts. Each toy car needs 4 wheels, 1 car body, and 2 figures of people to be placed inside. Given the total number of wheels, car bodies and figures available, how many complete toy cars can you make?
int cars (int wheels, int bodies, int figures) { // This function takes three parameters, and the number values for each are of the total number of wheels, car bodies, and figures available respectively.
	int completeCars = 0; // Make an integer variable named "completeCars" and set its value equal to 0. This initializes the "completeCars" variable that keeps track of the number of complete toy cars we can build.
	while (wheels >= 4 && bodies >= 1 && figures >= 2) { // This ensures that we have at least these specific amounts of each of these things. Here we check if there are enough resources to build a complete car. This while-loop says that while the number of wheels are greater than or equal to 4 and the number of car bodies are greater than or equal to 1, and the figure number is greater than or equal to 2, do the following. As long as we have a consistent ration of wheels to bodies to figures and have enough resources to build a complete car.
		completeCars++; // This loop increments the "completeCars" variable and adds 1 to it everytime the loop is iterated through. Within the loop, we increment completeCars by 1 since we are building a complete car. We also subtract the consumed resources from the available resources: 4 wheels, 1 car body, and 2 figures.
		wheels -= 4; // This makes "wheels" equal to "wheels" minus 4 because 1 car has been identified already.
		bodies -= 1; // This goes and takes 1 away from the value of bodies.
		figures -= 2; // This here also.
	}
	return completeCars; // Once we no longer have enough resources to build a complete car, the loop terminates, and the final value of completeCars is returned. In other words, when you can no longer subtract 4, 1, and 2 from the three variables, it returns the "completeCars" number.
}