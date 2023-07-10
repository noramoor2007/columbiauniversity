#include <stdio.h>
#include <string>
using namespace std;
struct Student {
  char name [50]; // This creates a name variable with a max of 50 characters.
  int gradelevel; // Th
  struct Student* bestfriend; // This is a pointer to another student object.
};
Student* createStudent (char name, int gradelevel) { // This creates a new "student" object with the given name and grade level, and initializes the "bestfriend" field to "NULL".
  Student* student = new Student; // This creates a new "Student" object. We have a pointer variable named "student" that points to "Student" and its memory address is now changed. The "new" operator is used to allocate memory for an object at runtime and returns a pointer to the object. Meaning reserving memory for a variable or an array. What's happening in this line of code is that a new object of type "Student" is created and its address is assigned to the pointer variable "student". The "new" operator allocates memory for the object and then calls the constructor of the class to initialize it.
  student->name [49] = name; // The "->" is a member access operator and like ".", it is used to refer to members of "struct" and class types alike. Here this is accessing the "name" member of the struct "Student" and calling it in this instance of that struct, and assigning it to the "name" parameter in this function.
  student->gradelevel = gradelevel; // This does the same thing and sets the "gradelevel" parameter equal to the "gradelevel" variable member of the struct.
  student->bestfriend = NULL; // Here this accesses the "bestfriend" pointer variable from the struct in this instance of the struct and sets that equal to "NULL". This initializes the bestfriend field to "NULL".
  return student; // This will return the "student" pointer variable which will return the memory address stored in "student".
}
void setBestFriend (Student* student1, Student* student2) { // This creates a function called, "setBestFriend", that is expected to return nothing (void), and takes two parameters, a pointer variable, "student1" that points to the memory address of something that is of type "Student". The same thing with the "student2" where it holds the memory address of something of type "Student", most likely, name, grade level, or best friend.
  student1->bestfriend = student2; // "student1" is an instance of "Student" and the "bestfriend" variable is set equal to "student2".
  student2->bestfriend = student1; // Likewise, the "student2" best friend is set equal to "student1", so now this says that "student1" is the best friend of "student2" and "student2" is the best friend of "student1".
}
void displayStudent (Student* student) { // This function is called, "displayStudent" and returns nothing. It has one parameter, that is a pointer that points to something of type struct "Student". This function displays the name, grade level, and best friend (if any) of a student object.
  printf ("The student's name is %s\n", student->name); // This prints out the name, represented by the name from the "student" pointer variable.
  printf ("%s grade level is %d", student->name, student->gradelevel); // This prints the student's "gradelevel".
  if (student->bestfriend != NULL) { // This checks if the "bestfriend" of "student" is not equal to "NULL".
    printf ("%s's best friend is %s.", student->name, student->bestfriend->name); // If it is not, then print "bestfriend". The main function holds the values for the best friend, so if the best friend were "NULL" that would be in the main method.
  } else {
    printf ("%s has no best friend.", student->name); // If it is "NULL", then print that the student has no best friend.
  }
}
int main () { // This is the main function.
  char name;
  char name2;
  int grade;
  printf ("Enter student's name: ");
  scanf ("%s", &name);
  printf ("What grade level is the student in? ");
  scanf ("%d", &grade);
  
  printf ("Enter student's best friend's name: ");
  scanf ("%s", &name2);
  Student* character1 = createStudent (name, sizeof (name));
  Student* character2 = createStudent (name2, sizeof (name2));

  setBestFriend (character1, character2);
  displayStudent (character1);
  displayStudent (character2);
}