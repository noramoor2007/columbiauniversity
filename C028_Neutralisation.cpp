#include <iostream>
// Given two strings comprised of + and -, return a new string which shows how the two strings interact in the following way; when positives and positives interact, they remain positive, when negatives and negatives interact, they remain negative, but when negatives and positives interact, they become neutral, and are shown as the number 0.
std :: string neutralise (std :: string s1, std :: string s2) {
	for (int i = 0; i < s1.size (); ++i)
		if (s1 [i] != s2 [i])
			s1 [i] = '0'; // Why does this have to be in single quotes?
	return s1;
}