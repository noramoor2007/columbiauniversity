#include <iostream>
#include <string>
using namespace std;
// Write a C++ program that creates a class called "Student" with data members "name" and "age". The class should have a member function called "displayInfo" that displays the name and age of the student. Create an object of the "Student" class, set the values of "name" and "age", and call the "displayInfo" function.
class Student { // This creates a class called "Student".
  public: // This makes the following code public, so accessible to other functions and other classes.
    string name;
    int age;
    void displayInfo () { // Because this returns nothing, you must print the name and the age.
      cout << "\x1b[4mName\x1b[0m: " << name << endl;
      cout << "\x1b[4mAge\x1b[0m: " << age << endl;
    }
};
int main () {
  Student student1; // Here we create an object in the main method.
  cout << "Please input a name: ";
  cin >> student1.name;
  cout << "Please input an age: ";
  cin >> student1.age;
  student1.displayInfo (); // This calls the function.
  return 0;
}