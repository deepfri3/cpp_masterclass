
/**
 * Section 8 Challenge
 * Date: 2020/08/04
 *
 * Write a program that asks the user to enter the following:
 * An integer representing the number of cents
 *
 * You may assume that the number of cents entered is >= 0
 *
 * The program should then display how to provide that change to the user.
 *
 * In the US:
 *  1 dollar is 100 cents
 *  1 quarter is 25 cents
 *  1 dime in 10 cents
 *  1 nickel is 5 cents
 *  1 penny is 1 cent
 *
 * Here is a sample run:
 *
 * Enter the amount of cents: 92
 * dollors: 0
 * quarters: 3
 * dimes: 1
 * nickels: 1
 * pennies: 2
 *
 *
 */

// Includes
#include <iostream>

using namespace std;

// Constants
const int cents_in_a_dollar {100};
const int cents_in_a_quarter {25};
const int cents_in_a_dime {10};
const int cents_in_a_nickel {5};
const int cents_in_a_penny {1};

int main() {
    cout << "Welcome to the change maker!\n" << endl;
    int original_amount {0};
    cout << "Enter your amount in cents: ";
    cin >> original_amount;
    //cout << amount << endl;

    int amount {original_amount};
    cout << "Change provided for " << original_amount << " cents:" << endl;
    int dollars = amount / cents_in_a_dollar;
    cout << "\tdollars  :" << dollars << endl;
    amount %= cents_in_a_dollar;
    int quarters = amount / cents_in_a_quarter;
    cout << "\tquarters :" << quarters << endl;
    amount %= cents_in_a_quarter;
    int dimes = (amount % cents_in_a_quarter) / cents_in_a_dime;
    cout << "\tdimes    :" << dimes << endl;
    amount %= cents_in_a_dime;
    int nickels = (amount % cents_in_a_dime) / cents_in_a_nickel;
    cout << "\tnickels  :" << nickels << endl;
    amount %= cents_in_a_nickel;
    int pennys = (amount % cents_in_a_nickel) / cents_in_a_penny;
    cout << "\tpennys   :" << pennys << endl;
    amount %= cents_in_a_penny;
    //cout << amount << endl;

    return 0;
}
