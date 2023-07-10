#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
// You are tasked with creating a program to manage student information at Hawkins Middle School from the TV show Stranger Things. Each student has the following attributes: name, grade level, and a pointer to a structure representing their best friend. Your task is to implement the necessary functions to handle student data. Write a function called createStudent () that takes the name and grade level as arguments and returns a dynamically allocated Student structure with the given values. The bestFriend member should initially be set to NULL. Write a function called setBestFriend () that takes two Student pointers as arguments: student1 and student2. This function should set the bestFriend member of both students to point to each other. Write a function called displayStudent () that takes a Student pointer as an argument and displays the student's name, grade level, and the name of their best friend. If the best friend is not set (i.e., NULL), display "No best friend".
struct Student {
  char name [50];
  int grade;
  struct Student* bestFriend;
};
struct Character {
  char name [50];
  int grade;
  char bestFriend [50];
};
struct Character characters [] = {
  {"Eleven", 8, "Mike"},
  {"Mike", 8, "Eleven"},
  {"Dustin", 7, "Lucas"},
  {"Lucas", 7, "Dustin"},
  {"Will", 7, "Mike"},
  {"Max", 8, "Eleven"},
  {"Nancy", 9, "Jonathan"},
  {"Jonathan", 10, "Nancy"},
  {"Steve", 11, "Dustin"},
  {"Billy", 12, "Fake Best Friend"},
  {"Fake Best Friend", 12, "Billy"}
};
struct Student* createStudent (const char* name, int grade) {
  struct Student* student = (struct Student*) malloc (sizeof (struct Student));
  strcpy (student->name, name);
  student->grade = grade;
  student->bestFriend = NULL;
  return student;
}
void setBestFriend (struct Student* student1, struct Student* student2) {
  student1->bestFriend = student2;
  student2->bestFriend = student1;
}
void displayStudent (const struct Student* student) {
  printf ("Student Name: %s\n", student->name);
  printf ("Grade Level: %d\n", student->grade);
  if (student->bestFriend != NULL) {
    printf ("Best Friend: %s\n", student->bestFriend->name);
  }
  else {
    printf ("No best friend\n");
  }
}
int main () {
  srand (time (NULL));
  char name [50];
  int grade;
  printf ("Student Name: ");
  fgets (name, sizeof (name), stdin);
  name [strcspn (name, "\n")] = '\0'; // Remove the newline character from the name.
  printf ("Grade Level: ");
  scanf ("%d", &grade);
  getchar (); // Consume the newline character left in the input buffer.
  struct Student* student = createStudent (name, grade);
  int numCharacters = sizeof (characters) / sizeof (characters [0]);
  int randomIndex = rand () % numCharacters; // Picks a random character from the list.
  struct Character bestFriendData = characters [randomIndex];
  struct Student* bestFriend = createStudent (bestFriendData.name, bestFriendData.grade);
  if (strcmp (bestFriendData.bestFriend, "Fake Best Friend") == 0) {
    // If the best friend is a fake best friend, set the best friend of the student as NULL.
    bestFriend->bestFriend = NULL;
  }
  else {
    // Find the index of the best friend in the characters array.
    int bestFriendIndex = -1;
    for (int i = 0; i < numCharacters; i++) {
      if (strcmp (characters [i].name, bestFriendData.bestFriend) == 0) {
        bestFriendIndex = i;
        break;
      }
    } // If the best friend is found, create a "Student" structure for them and set the best friends.
    if (bestFriendIndex != -1) {
      struct Character bestFriendCharacter = characters [bestFriendIndex];
      struct Student* bestFriendOfBestFriend = createStudent (bestFriendCharacter.name, bestFriendCharacter.grade);
      setBestFriend (bestFriend, bestFriendOfBestFriend);
    }
  }
  setBestFriend (student, bestFriend);
  displayStudent (student);
  free (student);
  free (bestFriend);
  return 0;
}