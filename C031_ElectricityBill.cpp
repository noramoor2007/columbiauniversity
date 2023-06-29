#include <iostream>
#include <cmath>
#include <iomanip>
// Create a function that takes number of units consumed by the customer and returns calculated Electricity Bill as per following conditions; first 100 Units will be charged at $1/unit, next 100 Units will be charged at $2/unit, next 100 Units will be charged at $3/unit, next 200 Units will be charged at $4/unit, next Units will be charged at $5/unit, 10% tax to be added in final amount, and an extra $15 to be added for Meter Charge.
double electricityBill (double units) {
	double totalofbill = 0.0; // I created a variable called "totalofbill" that represents the total electricity bill that will be used to store the total. Right now it is just set equal to 0, and it is a double so it is set equal to 0.0.
	double additionalcharge = 15.0;
	double tax = 0.10;
	if (units <= 100) { // If units is less than or equal to 100, then multiply units by 1 and set the total bill equal to that.
		totalofbill = units * 1.0;
	}
	else if (units <= 200) { // This will run only if it is not greater than 100. It is not possible that the units in this else if statement is less than or equal to 100 because it should have run through that condition. If units is less than or equal to 200, then set the total electricity bill equal to 100, which is from the first 100, plus the units minus 100 and multiplies by 2.
		totalofbill = 100.0 + (units - 100) * 2.0;
	}
	else if (units <= 300) {
		totalofbill = 100.0 + 100.0 * 2.0 + (units - 200) * 3.0;
	}
	else if (units <= 500) {
		totalofbill = 100.0 + 100.0 * 2.0 + 100.0 * 3.0 + (units - 300) * 4.0;
	}
	else {
		totalofbill = 100.0 + 100.0 * 2.0 + 100.0 * 3.0 + 200.0 * 4.0 + (units - 500) * 5.0;
	}
    double result = totalofbill + totalofbill * tax + additionalcharge;
    return std :: ceil (result * 100) / 100.0; // This line returns the final calculated electricity bill. It uses "std :: ceil" to round up the "finalAmount" to two decimal places by multiplying by 100, taking the ceiling value, and then dividing by 100.0. The result is rounded up to the nearest cent. Round up to two decimal places.
}
