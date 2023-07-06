#include <stdio.h> // These are the libraries.
#include <stdlib.h>
#include <time.h>
// Suppose you're developing a music playlist feature for the Spotify app. You have an array of artist names representing the songs in a playlist: "Ice Spice", "Drake", "Taylor Swift", and "Justin Bieber". Write a C program that uses pointers, arrays, and functions to perform the following tasks. Display the artists' names using pointer arithmetic. Implement a function called "shufflePlaylist" that randomly shuffles the order of the artists' names. Call the "shufflePlaylist" function and display the shuffled playlist using pointers.
void displayPlaylist (char** playlist, int size) { // This defines a function called "displayPlaylist" and it takes two parameters, a pointer called "playlist" that points to a pointer that points to a char, and a "size" variable that is an integer. This will display the playlist. Double asterisks are used to declare a pointer to a pointer to the type of the variable.
  for (int i = 0; i < size; i++) { // This for-loop creates an integer "i" initialized to 0, and this loop will continue as long as "i" is less than "size".
    printf ("• %s\n", *(playlist + i)); // This prints the formatted string, where "%s is a placeholder for a string value. This string value is obtained by dereferencing the pointer "*(playlist + i)", which represents the "i"-th element of the playlist. Everytime the loop runs, the function will print the memory location, whose memory address is stored in the playlist plus "i". This prints the string, whose memory address is tored in the playlist plus "i". The value of the pointer variable is a positive integer. So we are adding a positive integer to it.
  }
}
void shufflePlaylist (char** playlist, int size) { // This is another function definition for a function called "shufflePlaylist" and it takes the same two parameters, "playlist" and "size" again. This method is used to shuffle the playlist.
  srand (time (NULL)); // This initializes the random number generator using the "srand" function and by passing "time (NULL)" as an argument, the seed for the random number generator is set based on the current time. While "rand ()" is used to generate a series of random numbers, "srand ()" is used to initialize random number generators. The "srand (time (NULL))" function sets the seed for the random number generator to the current time. This is done so that each time you run your program, you get a different sequence of random numbers. I don't understand how this works exactly.
  for (int i = size - 1; i > 0; i--) { // This creates a variable "i" and it is set equal to the "size" minus 1, and "i" is greater than 0. So we are decrementing "i" by 1. It iterates in reverse order.
    int j = rand () % (i + 1); // Generates a random number for "j" using the "rand" function. The modulus "%" makes sure that "j" is within the range of 0 to "i". Integer "j" is equal to a random number mod "i" plus 1. Here "j" is just a random number in the size that excludes "i", so "j" can never be equal to "i" at the same time, that way there are no overlaps.
    char* temp = *(playlist + i); // This creates a "temp" pointer variable that is equal to the "i"-th element of the playlist. This changes the temporary variable to that value of the address stored in the "playlist" variable plus "i".
    *(playlist + i) = *(playlist + j); // This changes the value of the artists by accessing them through an indirection operator, the "*".
    *(playlist + j) = temp; // These two lines swap the values between the "i"-th and the "j"-th elements of the playlist using pointer arithmetic.
  }
}
int main (void) { // What would happen if I did that?
  char* playlist [] = {"Ice Spice", "Drake", "Taylor Swift", "Justin Bieber"}; // This defines an array of char pointers named "playlist" and initializes it with the artist names. This is the value that "playlist" is a pointer of and it is of type "char".
  int size = 4; // This is the size of the playlist.
  printf ("\x1b[4mOriginal Playlist\x1b[0m:\n"); // This uses escape sequences.
  displayPlaylist (playlist, size); // This calls the "displayPlaylist" function passing the "playlist" array and "size" as arguments to display the original playlist.
  printf ("\x1b[4m\nShuffled Playlist\x1b[0m:\n");
  shufflePlaylist (playlist, size); // This calls the "shufflePlaylist" function, passing the "playlist" array and the "size" integer as arguments into the "shufflePlaylist" method.
  displayPlaylist (playlist, size);
  return 0;
}
