#include <stdio.h>
#include <string.h>
struct Library {
  char title [100];
  char author [30];
  int pagenumber;
  float price;
  // Here are all the reasons why you should use char instead of std :: string, Compatibility with C, allows code to be compiled as C without additional dependencies. Fixed-size storage, efficient when the maximum string size is known in advance. Interoperability, compatible representation for exchanging data with other systems or libraries.
};
int main (void) {
  struct Library book1, book2, book3, book4, book5;
  strcpy (book1.title, "Brave New World");
  strcpy (book1.author, "Aldous Huxley");
  book1.pagenumber = 288;
  book1.price = 10.34;
  strcpy (book2.title, "Milkman");
  strcpy (book2.author, "Anna Burns");
  book2.pagenumber = 368;
  book2.price = 9.99;
  strcpy (book3.title, "The Woman in the Dunes");
  strcpy (book3.author, "Kabo Abe");
  book3.pagenumber = 256;
  book3.price = 14.69;
  strcpy (book4.title, "Parable of the Sower");
  strcpy (book4.author, "Octavia E. Butler");
  book4.pagenumber = 352;
  book4.price = 11.48;
  strcpy (book5.title, "A Good Man is Hard to Find");
  strcpy (book5.author, "Flannery O'Connor");
  book5.pagenumber = 276;
  book5.price = 11.92;
  printf ("%s", book1.title);
  printf ("\n%s", book1.author);
  printf ("\n%d pages", book1.pagenumber);
  printf ("\n$%.2f\n", book1.price);
  printf ("\n%s", book2.title);
  printf ("\n%s", book2.author);
  printf ("\n%d pages", book2.pagenumber);
  printf ("\n$%.2f\n", book2.price);
  printf ("\n%s", book3.title);
  printf ("\n%s", book3.author);
  printf ("\n%d pages", book3.pagenumber);
  printf ("\n$%.2f\n", book3.price);
  printf ("\n%s", book4.title);
  printf ("\n%s", book4.author);
  printf ("\n%d pages", book4.pagenumber);
  printf ("\n$%.2f\n", book4.price);
  printf ("\n%s", book5.title);
  printf ("\n%s", book5.author);
  printf ("\n%d pages", book5.pagenumber);
  printf ("\n$%.2f\n", book5.price);
}