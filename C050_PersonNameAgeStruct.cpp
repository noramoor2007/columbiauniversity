#include <stdio.h>
#include <string.h>
// Create a struct called "Person" with members "name" and "age". Declare an *object of the structure type and assign values to its members. Display the values on the screen. An object is a set of data members packed in a struct, and a set of related operations. Think of it as a person with attributes like eye color, hair color, shirt color, etc.
struct Person { // This declares a struct named "Person".
  char name [20]; // It has a char and int member. The char member is the "name". This line declares a member variable within the struct named "name". It is of type char and has an array size of 20. This suggests that the "name" member can hold up to 20 characters to store the name of a person. This suggests that the name can be up to 20 characters.
  int age; // This is an integer member called age.
};
int main (void) { // The program does not expect any input from the command line.
  struct Person person1; // This line declares a variable person1 of type struct Person. It creates an object of the Person struct to store information about a person.
  strcpy (person1.name, "Erik"); // Creates a copy of the struct variable. This will print a name with a maximum of 24 characters for some reason. This line uses the strcpy function from string.h to copy the string "Erik" into the name member of person1. This ensures that the string is copied into the name array without exceeding its size.
  person1.age = 16;
  printf ("Name: %s\n", person1.name);
  printf ("Age: %d\n", person1.age);
  return 0;
}