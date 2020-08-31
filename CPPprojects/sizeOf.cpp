
#include <iostream>
#include <climits>

using namespace std;

int main() {

    cout << "sizeOf information" << endl;
    cout << "=====================================" << endl;
    cout << "char: " << sizeof(char) << endl;
    cout << "short: " << sizeof(short) << endl;
    cout << "integer: " << sizeof(int) << endl;
    cout << "unsigned integer: " << sizeof(unsigned int) << endl;
    cout << "long: " << sizeof(long) << endl;
    cout << "long long: " << sizeof(long long) << endl;
    cout << "=====================================" << endl;
    cout << "float: " << sizeof(float) << endl;
    cout << "double: " << sizeof(double) << endl;
    cout << "long double: " << sizeof(long double) << endl;
    cout << "=====================================" << endl;
    cout << "char min: " << CHAR_MIN << endl;
    cout << "char max: " << CHAR_MAX << endl;
    cout << "unsigned char max: " << UCHAR_MAX << endl;
    cout << "short min: " << SHRT_MIN << endl;
    cout << "short max: " << SHRT_MAX << endl;
    cout << "unsigned short max: " << USHRT_MAX << endl;
    cout << "integer min: " << INT_MIN << endl;
    cout << "integer max: " << INT_MAX << endl;
    cout << "unsigned integer max: " << UINT_MAX << endl;
    cout << "long min: " << LONG_MIN << endl;
    cout << "long max: " << LONG_MAX << endl;
    cout << "unsigned long max: " << ULONG_MAX << endl;
    cout << "long long min: " << LONG_LONG_MIN << endl;
    cout << "long long max: " << LONG_LONG_MAX << endl;
    cout << "unsigned long long max: " << ULONG_LONG_MAX << endl;

    return 0;
}
