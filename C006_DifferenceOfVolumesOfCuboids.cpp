#include <iostream>
// Create a program that will take two arrays of integers, a and b. Each array will consist of 3 positive integers, representing the dimensions of cuboids a and b. Find the difference of the cuboids' volumes. For example, if the parameters passed are ([2, 2, 3], [5, 4, 1]), the volume of a is 12 and the volume of b is 20. Therefore, the function should return 8.
int findDifference (std :: vector <int> a, std :: vector <int> b) {
	int volumea = a [0] * a [1] * a [2]; // Finds the volume of "cuboid a" by multiplying the three given positive integers in the array that represent the dimensions of the cuboid.
	int volumeb = b [0] * b [1] * b [2]; // Finds the volume of "cuboid b" by multiplying the three given positive integers in the array that represent the dimensions of the cuboid.
	if (volumea > volumeb) { // This condition checks if the volume of "cuboid a" is greater than the volume of "cuboid b" in order not to get a negative number. Also this approach is easier.
		return volumea - volumeb; // This finds the positive difference of the two volumes. If you did not check if it was greater or not, then you would get a negative number and have to make a conditional sentence that checks if the difference is negative or positive and as a result will have to multiply that value by -1. That approach is way more is way more tedious afterall.
	}
	else if (volumeb > volumea) { // If the above if-statement does not evaluate to true, this condition says that if "cuboid b" this time has a greater volume than "cuboid a", then they will have to do the following.
		return volumeb - volumea; // The function will return the positive integer difference of the two volumes.
	}
	else { // If none of these conditions are met, then this condition has the function return 0 because the only other possible reason for the volumes not being either greater or less than the other is if they are equal to each other.
		return 0;
	}
}