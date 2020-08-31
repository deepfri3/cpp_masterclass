/**
 * Section 10 Assignment
 * Date: 2020/08/09
 * Letter Pyramid
 *
 * Display a letter pyramid from a user provide string
 * "ABC"
 *   A
 *  ABA
 * ABCAB
 *
 * Take input from user.
 *
 * Use nested loops
 * Outer loop will control rows
 * determine number of spaces before and for after
 * Inner loop will control pyramid
 *
 * Questions for this assignment:
 * Which C++ loop(s) did you use and why?
 * How did you handle displaying the leading spaces in each row of the pyramid?
 * Now that you completed the assignment, how might approach the problem differently if you had to solve it again?
 */

#include <iostream>
#include <string>

using namespace std;


int main () {

    cout << "Enter string: ";
    string user_input;
    cin >> user_input;

    for(size_t row {0}; row < user_input.length(); ++row) {
        size_t number_of_padding_spaces {user_input.length()-(row+1)};
        string print_row (number_of_padding_spaces,' ');

        for(size_t column {0}; column <= row; column++){
            print_row.push_back(user_input.at(column));
        }

        for(size_t column {0}; column < row; column++){
            print_row.push_back(user_input.at(column));
        }

        print_row.append(number_of_padding_spaces,' ');
        cout << print_row << endl;
    }

    return 0;
}


/*
 *int main()
 *{
 *    std::string letters{};
 *
 *    std::cout << "Enter a string of letters so I can create a Letter Pyramid from it: ";
 *    getline(std::cin, letters);
 *
 *    size_t num_letters = letters.length();
 *
 *    int position {0};
 *
 *    // for each letter in the string
 *    for (char c: letters) {
 *
 *        size_t num_spaces = num_letters - position;
 *        while (num_spaces > 0) {
 *            std::cout << " ";
 *            --num_spaces;
 *        }
 *
 *        // Display in order up to the current character
 *        for (size_t j=0; j < position; j++) {
 *            std::cout << letters.at(j);
 *        }
 *
 *        // Display the current 'center' character
 *        std::cout << c;
 *
 *        // Display the remaining characters in reverse order
 *        for (int j=position-1; j >=0; --j) {
 *            // You can use this line to get rid of the size_t vs int warning if you want
 *            auto k = static_cast<size_t>(j);
 *            std::cout << letters.at(k);
 *        }
 *
 *        std::cout << std::endl; // Don't forget the end line
 *        ++position;
 *    }
 *
 *    return 0;
 *}
 */
