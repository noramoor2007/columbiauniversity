#include <iostream>
#include <vector>
#include <string>
#include <list>
#include <cstdlib>
#include <ctime>
using namespace std;
class Employee {
public:
  string name;
  int hoursWorked;
  float hourlyRate;
  list <float> payrollRecord;
  int expectedHours;
  char deduction;
  // This is a constructor, which constructs an object.
  Employee (string n, int hW, float hR, int eH, float d) {
    name = n;
    hoursWorked = hW;
    hourlyRate = hR;
    expectedHours = eH;
    deduction = d;
  }
  // This calculates the wage based on the "hourlyRate", "hoursWorked", overtime (1.5x for each hour worked over the expected hours), and deductions.
  float calculateWage () {
    float wage;
    if (hoursWorked > expectedHours) { // If they worked overtime.
      wage = (hoursWorked * hourlyRate) + ((hoursWorked - expectedHours) * 0.5)* hourlyRate; // 1.5x the hourly wage for every hour over.
    } else {
      wage = (hoursWorked * hourlyRate); // This is not overtime.
    }

    wage -= deduction; // This is the deductions code line.
    
    payrollRecord.push_back (wage); // Add to the payroll record.
    return wage; // Return the wage to main.
  }
};
string generateEmail (string name){
  int type = (rand () % 10);
  
  string emails [10] = {"@icloud.com", "@yahoo.com", "@mac.com", "@outlook.com", "@gmail.com", "@proton.me", "@ymail.com", "@columbia.edu", "@gmx.net", "@zohocorp.com"};
  return name + emails [type];
}
string generatePosition (){
  int type = (rand () % 10); 
  string positions [10] = {"Human resources manager", "Information technology manager", "Marketing manager", "Product manager", "Sales manager", "Administrative assistant", "Bookkeeper", "Business analyst", "Sales representative", "Software engineer"};
  return positions [type];
}
int main () {
  vector <Employee> employees;
  string name;
  int hours;
  float rate;
  string viewrec;
  int expectedHours;
  int numEmployees;
  char deduct;
  float deduction;
  string wanttoview = "\nIf you want to view the employee payroll records, type \x1b[94;1mp\x1b[0m: "; // This creates a string variable that stores the string that asks the user if they want to view the payroll records.
  srand(time(0)); // This generates a random number at 0 time.
  int phonenumbers; 
  cout << "\x1b[104mWelcome to the Employee Payroll System!\x1b[0m" << endl;
  cout << "Enter the number of employees: ";
  cin >> numEmployees;
  for (int i = 0; i < numEmployees; ++i) { // This for-loop prompts the user to enter information about the employee(s).
    cout << "_____________________________\n";
    cout << "Enter employee \x1b[96mname\x1b[0m: "; // Employee name
    cin >> name;
    cout << "How many \x1b[96mhours\x1b[0m did " << name << " work this week? "; // Number of hours they worked in a week
    cin >> hours;
    while (hours >= 168) { //cannot work more than 168 hours (the amount of hours in a week), reenter // This ensures that the number of hours entered does not exceed 168 hours, because there are 168 hours in a week.
      cout << "That is impossible! How can " << name << " work over 168 hours if there are only 168 hours in a week? Are they really human?\nPlease enter a realistic amount of hours: "; // There is an error message if it exceeds 168 hours.
      cin >> hours; 
    }
    cout << "How many \x1b[96mhours\x1b[0m were \x1b[96mexpected\x1b[0m of " << name << "? ";
    cin >> expectedHours;
    while (expectedHours >= 168) { // This cannot work more than 168 hours (the amount of hours in a week), it will ask the user re-enter.
      cout << "That is impossible! How can " << name << " work over 168 hours if there are only 168 hours in a week? Are they really human?\nPlease enter a realistic amount of hours: ";
      cin >> expectedHours;
    }
    cout << "Enter \x1b[96mhourly rate\x1b[0m: $";
    cin >> rate;
    cout << "Did " << name << " recieve any \x1b[96mdeductions\x1b[0m? (\x1b[92mY\x1b[0m/\x1b[91mN\x1b[0m) ";
    cin >> deduct;
    if(deduct == 'Y' || deduct == 'y'){ // There is a deduction.
      cout << "How much was the deduction? $";
      cin >> deduction;
      while (deduction > rate) { // The deduction cannot be more than their hourly rate, it will ask the user to re-enter the amount.
        cout << "\n\x1b[91mThe deduction cannot be more than the hourly rate.\x1b[0m\nPlease enter the correct deduction amount: $";
        cin >> deduction;
      }
    }
    else if (deduct == 'N' || deduct == 'n'){ // Not a deduction.
      deduction = 0;
    }
    else { // This code says that if the user  did not enter y or n --> they have to reenter their decision.
      while (deduct != 'N' || deduct != 'n' || deduct != 'Y' || deduct != 'y') {
        cout << "Please answer correctly. Did " << name << " recieve any \x1b[96mdeductions\x1b[0m? (\x1b[92mY\x1b[0m/\x1b[91mN\x1b[0m) ";
      }
    }
    employees.emplace_back(name, hours, rate, expectedHours, deduction);
  }
  cout << wanttoview;
  cin >> viewrec;
  cout << "\n\x1b[3mPayroll Record Information:\x1b[0m\n";
  cout << " _____________________________";
  for (Employee& employee : employees) { // Printing out each employees record (name, phone number, and wage).
    float wage = employee.calculateWage ();
    phonenumbers = rand () % 100000000000; // This ensures that the length of the integer created is the length of a regular phone number.
    string email = generateEmail (employee.name);
    string position = generatePosition ();
    
    cout << "\n| \x1b[4mEmployee\x1b[0m: " << employee.name << endl;
    cout << "| \x1b[4mPhone Number\x1b[0m: +1" << phonenumbers << endl;
    cout << "| \x1b[4mEmail\x1b[0m: " << email << endl;
    cout << "| \x1b[4mPosition\x1b[0m: " << position << endl;
    cout << "| \x1b[4mWeekly Wage\x1b[0m: $" << wage << "\n|_____________________________";
  }
  return 0;
}