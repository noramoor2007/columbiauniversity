#include <iostream>
// There is a ?: operator in C++ and its basic form is (condition) ? (something1) : (something2). Write a function that uses the ?: operator to return "yeah" if b is true, and "nope" otherwise.
std :: string yeahNope (bool b) {
	return (b ? "yeah" : "nope"); // You have to put the ?: operator in a return statement and not the return statement within the operation.
}