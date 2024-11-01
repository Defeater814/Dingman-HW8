// Matthew Dingman
// Professor Qouneh

// bankApp.cpp Application file 

// This application file creates utilizes the BankAccount class interfaces in
// the bankAccount.h header file and the bankAccount.cpp instatiation file. The
// class allows accounts to be made, deposited into, withdrawn from, and viewed.
// In this program, accounts are made for Jack, Jill, Ralph, Alice, and Ed.
// Their accounts are deposited into, withdrawn from, and their balances are
// printed.

// Example invocation: ./bankApp

#include<iomanip>
#include<iostream>
#include<string>
#include "bankAccount.h"

int main(int argc, char* argv[]) {
  BankAccount jackAccount("Jack Smith", 50.00); // Instatiates Jack and Jill's accounts
  BankAccount jillAccount("Jill Brian", 100.00);

  BankAccount bankArray[] = { // Instatiates the array with Ralph's, Alice's, and Ed's information
    BankAccount("Ralph Kramden", 10.00), 
    BankAccount("Alice Kramden", 20.00),
    BankAccount("Ed Norton", 30.00)
  };
  
  jackAccount.deposit(30.00); // Deposits 30 dollars and withdraws 20 dollars from jack and jill's accounts
  jackAcocunt.withdraw(20.00);

  jillAccount.deposit(30.00);
  jillAccount.withdraw(20.00);
  
  cout << "Name: " << jackAccount.getName() << endl; // Prints Jack and Jill's names and balances
  cout << "Balance: $" << fixed << setprecision(2) << jackAccount.getBalance() << endl;
  cout << endl;
  cout << "Name: " << jillAccount.getName() << endl;
  cout << "Balance: $" << fixed << setprecision(2) << jackAccount.getBalance() << endl;
  cout << endl;

  for (int i = 0; i < 3; i++) { // Deposits 30 dollars and withdraws 20 dollars to the names in bankArray, then prints their names and balances
    bankArray[i].deposit(30.00);
    bankArray[i].withdraw(20.00);

    cout << "Name: " << bankArray[i].getName() << endl;
    cout << "Balance: $" << fixed << setprecision(2) << bankArray[i].getBalance() << endl;
    cout << endl;
  }
}

  
