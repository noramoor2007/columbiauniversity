#include <iostream>
// I wish there was an easier way to do this that is more simplified and condensed.
// Create a function that takes a number (from 1 to 12) and returns its corresponding month name as a string. For example, if you're given 3 as input, your function should return "March", because March is the 3rd month.
std :: string monthName (int num) {
	if (num == 1) {
		return "January";
	}
	else if (num == 2) {
		return "February";
	}
	else if (num == 3) {
		return "March";
	}
	else if (num == 4) {
		return "April";
	}
	else if (num == 5) {
		return "May";
	}
	else if (num == 6) {
		return "June";
	}
	else if (num == 7) {
		return "July";
	}
	else if (num == 8) {
		return "August";
	}
	else if (num == 9) {
		return "September";
	}
	else if (num == 10) {
		return "October";
	}
	else if (num == 11) {
		return "November";
	}
	else if (num == 12) {
		return "December";
	}
}