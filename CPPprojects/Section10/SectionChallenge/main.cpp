
/**
 * Section 10 Challenge
 * Date: 2020/08/10
 *
 * Substitution Cipher
 *
 * 1. Program asks user for a secret message using cin and getline
 * 2. Program stores the secret message in a string
 * 3. Encrypt the message character by character with the key
 * 4. Print encrypted message
 * 5. Decrypt the message character by character with the key
 * 6. Print decrypted message
 *
 * Requires:
 * -define alphabet
 * -define key
 * -Variable to store input message
 * -Variable to store encrypted message
 * -Variable to store decrypted message
 */


#include <iostream>
#include <string>

using namespace std;

const string alphabet {"abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ1234567890!@#$%.'? -"};
const string key {"ZYXWVUTSRQPONMLKJIHGFEDCBAzyxwvutsrqponmlkjihgfedcba0987654321?'.%$#@!_+"};

int main() {

    // test alpabet and key
    //cout << "Alphabet: " << alphabet << endl;
    //cout << "Alphabet size: " << alphabet.length() << endl;
    //cout << "Key: " << key << endl;
    //cout << "Key size: " << key.length() << endl;

    // Ask for and store secret message from user
    cout << "Enter the secret message: ";
    string message;
    getline(cin,message);
    //cout << "Secret message: " << endl;;
    //cout << message << endl;
    cout << endl;

    // Encrypt the secret message using the key character by character
    cout << "Begin encrypting..." << endl;
    string encrypted_message;
    for(size_t m_index {0}; m_index < message.length(); ++m_index) {
        char message_char {message.at(m_index)};
        size_t a_index {alphabet.find(message_char)};
        // Check if encryption is necessary
        if(a_index != string::npos) {
            // encrypt the character
            char encrypted_value {key.at(a_index)};
            message.replace(m_index,1,1,encrypted_value);
        }
        //cout << "Encrypting..." << message << endl;
    }
    cout << "Encrypted message: " << endl;
    //cout << encrypted_message << endl;
    cout << message << endl;
    cout << endl;

    cout << "Begin decrypting..." << endl;
    for(size_t m_index {0}; m_index < message.length(); ++m_index) {
        char message_char {message.at(m_index)};
        size_t key_index {key.find(message_char)};
        // Check if decryption is necessary
        if(key_index != string::npos) {
            // decrypt the character
            char decrypted_value {alphabet.at(key_index) };
            message.replace(m_index,1,1,decrypted_value);
        }
        //cout << "Decrypting..." << message << endl;
    }
    cout << "Decrypted message: " << endl;
    cout << message << endl;
    cout << endl;

    return 0;
}
