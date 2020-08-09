
/**
 * Section 7 Challenge
 * Date: 2020/08/02
 *
 * Declare 2 empty vectors of integers named:
 * vector1 and vector2, respectively
 *
 * add 10 and 20 to vector1 dynamically using push_back
 * Display the elements in vector2 using the at() method as well
 * as its size using the size() method
 *
 * add 100 and 200 to vector2 dynamically using push_back
 * Display the elements in vector2 using the at() method as well
 * as its size using the size() method
 *
 * Declare an empty 2D vector called vector_2d
 * Remember, that a 2D vector is a vector of vector<int>
 *
 * Add vector1 to vector_2d dynamically using push_back
 * Add vector2 to vector_2d dynamically using push_back
 *
 * Display the elements in vector_2d using the at() method
 *
 * Change vector1.at(0) to 1000
 *
 * Display the elements in vector_2d again using the at() method
 *
 * Display the elements in vector1
 *
 * What did you expect? Did you get what you expected?
 * What do you think happened?
 *
 */

/* Includes */
#include <iostream>
#include <vector>

using namespace std;

int main() {

    vector<int> vector1, vector2;

    vector1.push_back(10);
    vector1.push_back(20);
    vector<int>::iterator it = vector1.begin();
    cout << "vector1 contains:";
    for(; it != vector1.end(); ++it) {
       cout << ' ' << *it;
    }
    cout << endl;

    vector2.push_back(100);
    vector2.push_back(200);
    it = vector2.begin();
    cout << "vector2 contains:";
    for(; it != vector2.end(); ++it) {
       cout << ' ' << *it;
    }
    cout << endl;

    vector<vector<int>> vector_2d;
    vector_2d.push_back(vector1);
    vector_2d.push_back(vector2);
    cout << "vector_2d contains:" << endl;
    cout << "row 1:";
    cout << ' ' << vector_2d.at(0)[0];
    cout << ' ' << vector_2d.at(0)[1] << endl;
    cout << "row 2:";
    cout << ' ' << vector_2d.at(1)[0];
    cout << ' ' << vector_2d.at(1)[1] << endl;

    vector_2d.at(0)[0]=1000;

    cout << "vector_2d contains:" << endl;
    cout << "row 1:";
    cout << ' ' << vector_2d.at(0)[0];
    cout << ' ' << vector_2d.at(0)[1] << endl;
    cout << "row 2:";
    cout << ' ' << vector_2d.at(1)[0];
    cout << ' ' << vector_2d.at(1)[1] << endl;

    return 0;
}
