#include <iostream>
#include <cmath>
#include <iomanip>
// Create a function that takes number of units consumed by the customer and returns calculated Electricity Bill as per following conditions; first 100 Units will be charged at $1/unit, next 100 Units will be charged at $2/unit, next 100 Units will be charged at $3/unit, next 200 Units will be charged at $4/unit, next Units will be charged at $5/unit, 10% tax to be added in final amount, and an extra $15 to be added for Meter Charge.
double electricityBill (double units) {
	double totalofbill = 0.0;
	double taxratepercent = 0.10; // This is the 10% tax.
	double additionalcharge = 15.0;
	if (units <= 100) {
		totalofbill = units * 1.0;
	}
	else if (units <= 200) {
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
    double taxamount = totalofbill * taxratepercent;
    double result = totalofbill + taxamount + additionalcharge;
    return std :: ceil (result * 100) / 100.0; // This line returns the final calculated electricity bill. It uses std::ceil to round up the finalAmount to two decimal places by multiplying by 100, taking the ceiling value, and then dividing by 100.0. The result is rounded up to the nearest cent. Round up to two decimal places.
}