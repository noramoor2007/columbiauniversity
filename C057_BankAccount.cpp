#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
// Write a C++ program that creates a class called "BankAccount" with data members "accountNumber" and "balance". The class should have member functions "deposit" and "withdraw" to update the account balance accordingly. Create an object of the "BankAccount" class, set the initial values of "accountNumber" and "balance", and perform some deposit and withdrawal operations.
class BankAccount {
  public:
    int accountNumber;
    double balance;
    void deposit (double balance) {
      cout << "\nUpdated Balance: $" << balance;
    }
    void withdraw (double balance) {
      if (balance < 0) {
        cout << "You have insufficient funds.";
      }
      else {
        cout << "Updated Balance: $" << balance;
      }
    }
};
int main () {
  BankAccount account1;
  string deporwith;
  double withdrawamount;
  double depositamount;
  srand (time (NULL));
  int number = 100000000;
  int accountNumber = rand () % number + 1;
  //int accountNumber = 1 + (rand () / 100);
  double balance = 0 + (rand () % 10000);
  cout << "\x1b[1mAccount Number\x1b[0m: " << accountNumber << endl;
  cout << "\x1b[1mCurrent Balance\x1b[0m: $" << balance << endl;
  cout << "Would you like a withdrawal or a deposit? ";
  cin >> deporwith;
  if (deporwith == "withdrawal") {
    cout << "How much would you like to withdraw? ";
    cin >> withdrawamount;
    balance -= withdrawamount;
    account1.withdraw (balance);
  }
  else if (deporwith == "deposit") {
    cout << "How much would you like to deposit? ";
    cin >> depositamount;
    balance += depositamount;
    account1.deposit (balance);
  }
  return 0;
}