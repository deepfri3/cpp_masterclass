// Section 6 Challenge
// Date: 2020/07/31

/**
 * George's Carpet Cleaning Service
 * Charges
 *  $25 per small room
 *  $35 per large room
 * Sales tax rate is 6%
 * Estimates are valid for 30 days
 *
 * prompt user for the number of small and large rooms they would like cleaned
 * and provide an estimate such as:
 *
 * Estimate for carpet cleaning service:
 * Number of small rooms: 3
 * Number of large rooms: 1
 * Price per small room: $25
 * Price per large room: $35
 * Cost: $110
 * Tax: $6.6
 * ======================================
 * Total estimate: $116.6
 * This estimate is valid for 30 days
 */

#include <iostream>

using namespace std;

const double small_room_rate {25.00};
const double large_room_rate {35.00};
const double sales_tax_rate {0.06};
const int estimate_validity_period {30}; // days

double calc_small_room_cost(int number_of_small_rooms) {
    return (number_of_small_rooms * small_room_rate);
}

double calc_large_room_cost(int number_of_large_rooms) {
    return (number_of_large_rooms * large_room_rate);
}

int main() {

    cout << "Welcome to George's Carpet Cleaning Service!\n" << endl;

    cout << "Enter number of small rooms: ";
    int number_of_small_rooms {0};
    cin >> number_of_small_rooms;

    cout << "Enter number of large rooms: ";
    int number_of_large_rooms {0};
    cin >> number_of_large_rooms;

    cout << "\nEstimate for carpet cleaning service:" << endl;
    cout << "\tNumber of small rooms: " << number_of_small_rooms << endl;
    cout << "\tNumber of large rooms: " << number_of_large_rooms << endl;
    cout << "\tPrice per small room: $" << small_room_rate << endl;
    cout << "\tPrice per large room: $" << large_room_rate << endl;
    cout << "\tTax Rate: " << sales_tax_rate << "%" << endl;
    cout << "========================================" << endl;
    double cost_estimate = calc_small_room_cost(number_of_small_rooms)
                            +calc_large_room_cost(number_of_large_rooms);
    cout << "Cost: $" << cost_estimate << endl;
    double sales_tax = cost_estimate*sales_tax_rate;
    cout << "Tax: $" << sales_tax << endl;
    cout << "========================================" << endl;
    cout << "Total estimate: $" << cost_estimate+sales_tax << endl;
    cout << "This estimate is valid for " << estimate_validity_period << " days.";

    return 0;
}

