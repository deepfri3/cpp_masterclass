/**
 * Section 11 Challenge
 * Date: 2020/08/16
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

/// Includes
#include <iostream>
#include <vector>

using namespace std;

/// Function Prototypes
void print_menu();
void print_list(const vector<int> &list_of_numbers);
void add_number(vector<int> &list_of_numbers);
void calc_average(const vector<int> &list_of_numbers);
void display_smallest_number(const vector<int> &list_of_numbers);
void display_largest_number(const vector<int> &list_of_numbers);
bool find(const vector<int> &list_of_numbers);

int main() {
    vector<int> list_of_numbers {};
    char selection {};
    do {
        print_menu();
        cin >> selection;
        switch(selection) {
            case 'P':
            case 'p':
                print_list(list_of_numbers);
                break;
            case 'A':
            case 'a':
                add_number(list_of_numbers);
                break;
            case 'M':
            case 'm':
                calc_average(list_of_numbers);
                break;
            case 'S':
            case 's':
                display_smallest_number(list_of_numbers);
                break;
            case 'L':
            case 'l':
                display_largest_number(list_of_numbers);
                break;
            case 'F':
            case 'f':
                if(find(list_of_numbers)) {
                    cout << "Number found!" << endl;
                } else {
                    cout << "Number not found!" << endl;
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

void print_menu() {
    cout << "Menu Options:" << endl;
    cout << "================================" << endl;
    cout << "P - Print numbers" << endl;
    cout << "A - Add a number" << endl;
    cout << "M - Display mean of the numbers" << endl;
    cout << "S - Display the smallest number" << endl;
    cout << "L - Display the largest number" << endl;
    cout << "F - Find a number" << endl;
    cout << "Q - Print numbers" << endl;
    cout << "================================" << endl;
    cout << "Enter choice: ";
}

void print_list(const vector<int> &list_of_numbers) {
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

void add_number(vector<int> &list_of_numbers) {
    cout << "Enter your number: ";
    int user_number {};
    cin >> user_number;
    list_of_numbers.push_back(user_number);
}



void calc_average(const vector<int> &list_of_numbers) {
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

void display_smallest_number(const vector<int> &list_of_numbers) {
    if (list_of_numbers.size() == 0) {
        cout << "[] - the list is empty" << endl;
    } else {
        int smallest_number {list_of_numbers.at(0)};
        for( int i {1}; i < list_of_numbers.size(); i++ ) {
            if (smallest_number > list_of_numbers.at(i)) {
                smallest_number = list_of_numbers.at(i);
            }
        }
        cout << "Smallest number: " << smallest_number << endl;
    }
}

void display_largest_number(const vector<int> &list_of_numbers) {
    if (list_of_numbers.size() == 0) {
        cout << "[] - the list is empty" << endl;
    } else {
        int largest_number {list_of_numbers.at(0)};
        for( int i {1}; i < list_of_numbers.size(); i++) {
            if (largest_number < list_of_numbers.at(i)) {
                largest_number = list_of_numbers.at(i);
            }
        }
        cout << "Largest number: " << largest_number << endl;
    }
}

bool find(const vector<int> &list_of_numbers) {
    bool is_found = false;
    if (list_of_numbers.size() == 0) {
        cout << "[] - the list is empty" << endl;
    } else {
        int target {};
        cout << "Enter number: ";
        cin >> target;
        for(auto number: list_of_numbers) {
            if (number == target) {
                is_found = true;
                break;
            }
        }
    }
    return is_found;
}
