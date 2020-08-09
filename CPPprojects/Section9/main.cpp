/**
 * Section 9 Challenge
 * Date: 2020/08/06
 *
 * Steps:
 * Print menu of options
 * Take user input
 * Use switch statement to determine action
 * -P - print list
 * -A - add a number to the list (push_back)
 * -M - Display mean of the numbers
 * -S - Display the smallest number
 * -L - Display the large number
 * -Q - quit
 * Repeat unless user quit
 *
 * Use a vectin to store list of number
 */

#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<int> list_of_numbers {};

    char selection {};
    do {
        cout << "Menu Options:" << endl;
        cout << "================================" << endl;
        cout << "P - Print numbers" << endl;
        cout << "A - Add a number" << endl;
        cout << "M - Display mean of the numbers" << endl;
        cout << "S - Display the smallest number" << endl;
        cout << "L - Display the largest number" << endl;
        cout << "Q - Print numbers" << endl;
        cout << "================================" << endl;
        cout << "Enter choice: ";
        cin >> selection;

        switch(selection) {
            case 'P':
            case 'p':
                {
                    if (list_of_numbers.size() == 0) {
                        cout << "[] - the list is empty" << endl;
                    } else {
                        cout << "List of numbers: [";
                        int i {0};
                        for(; i < list_of_numbers.size()-1; i++)
                            cout << list_of_numbers.at(i) << ' ';
                        cout << list_of_numbers.at(i) << "]" << endl;
                    }
                }
                break;
            case 'A':
            case 'a':
                {
                    cout << "Enter your number: ";
                    int user_number {};
                    cin >> user_number;
                    list_of_numbers.push_back(user_number);
                }
                break;
            case 'M':
            case 'm':
                {
                    if (list_of_numbers.size() == 0) {
                        cout << "[] - the list is empty" << endl;
                    } else {
                        int sum {};
                        double mean {};
                        for(auto number: list_of_numbers) {
                            sum += number;
                        }
                        mean = static_cast<double>(sum) / list_of_numbers.size();
                        cout << "Mean: " << mean << endl;
                    }
                }
                break;
            case 'S':
            case 's':
                {
                    if (list_of_numbers.size() == 0) {
                        cout << "[] - the list is empty" << endl;
                    } else {
                        int smallest_number {list_of_numbers.at(0)};
                        for( int i {1}; i < list_of_numbers.size()-1; i++ ) {
                            if (smallest_number > list_of_numbers.at(i+1)) {
                                smallest_number = list_of_numbers.at(i+1);
                            }
                        }
                        cout << "Smallest number: " << smallest_number << endl;
                    }
                }
                break;
            case 'L':
            case 'l':
                {
                    if (list_of_numbers.size() == 0) {
                        cout << "[] - the list is empty" << endl;
                    } else {
                        int largest_number {list_of_numbers.at(0)};
                        for( int i {1}; i < list_of_numbers.size()-1; i++ ) {
                            if (largest_number < list_of_numbers.at(i+1)) {
                                largest_number = list_of_numbers.at(i+1);
                            }
                        }
                        cout << "Largest number: " << largest_number << endl;
                    }
                }
                break;
            case 'Q':
            case 'q':
                cout << "Quitting..." << endl;
                break;
            default:
                cout << "Invalid choice - try again." << endl;

        }

        cout << endl;
    } while (selection != 'q' && selection != 'Q');

    cout << endl;
    return 0;
}

