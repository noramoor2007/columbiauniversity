#include <iostream>
// John is playing a dice game. The rules are as follows. Roll two dice, add the numbers on the dice together, add the total to your overall score, and repeat this for three rounds. But if you roll DOUBLES, your score is instantly wiped to 0 and your game ends immediately! Create a function which takes in a matrix as input, and return John's score after his game has ended.
int diceGame (std :: vector <std :: vector <int>> arr) {
	int sum1 = 0;
	// As briefly stated in https://thispointer.com/c-how-to-iterate-over-a-vector/, The variable "a" is of type "std :: vector <int>". It represents an individual array within the vector "arr". When you write for (std :: vector <int> a : arr), it means that for each element in the vector "arr", an individual array will be assigned to the variable "a". The type "std :: vector <int>" is used because the elements of "arr" are themselves vectors of integers. By using the type "std :: vector <int>", you can access the elements of each array within the loop using the index notation "a [0]" and "a [1]". These indexes allow you to access the first and second elements of the current array "a". If you were to simply use "int" instead of "std :: vector <int>", you would not be able to iterate over the elements of "arr" as separate arrays and access their individual elements.
	for (std::vector<int> a : arr) { // This says for some value in the array, "a", do the following. Remember that this is an array of arrays, so "a" represents an array. That's why you would not have to make this if-statment, "if (arr [a] [0] == arr [a] [1]) {".
		if (a [0] == a [1]) { // This compares an array within the array, "arr", and checks if they are the same.
			return 0; // If they are the same, then return 0.
		}
		sum1 += a [0] + a [1]; // This sets the sum equal to the sum plus the value in the array within the array with an index of 0 to that with an index of 1, if they are NOT the same.
	}
	return sum1; // This just returns the sum.
}