#include <iostream>
// Create a function that takes an initial word and extracts any words that start with the same letters as the initial word.
std :: vector <std :: string> dictionary (std :: string initial, std :: vector <std :: string> words) {
	std :: vector <std :: string> result;
	for (const std :: string& word : words) { // The const keyword is used to declare a variable as constant, meaning its value cannot be modified after initialization. Also, "string&" is a reference to a string object. It allows you to refer to an existing string variable by another name, without creating a copy of the string.
		if (word.substr (0, initial.length ()) == initial) { // Also, the "substr" function should be called on a string, not on a vector of strings.
			result.push_back (word); // This "push_back" is a member function of the "std::vector" container class. It is used to add an element at the end of the vector, increasing its size by one. The "push_back" function takes an argument of the element type and appends it to the back of the vector.
		}
	}
	return result;
}