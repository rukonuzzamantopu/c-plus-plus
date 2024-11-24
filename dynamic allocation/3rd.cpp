#include <iostream>
#include <string>
#include <stdexcept> // For exception handling
using namespace std;

// Custom exception class
class TooShortException : public exception {
private:
    int length; // To store the length of the username
public:
    TooShortException(int len) : length(len) {}

    // Overriding the what() method to provide custom error message
    const char* what() const noexcept override {
        static string message;
        message = "Too short: " + to_string(length);
        return message.c_str();
    }
};

// Function to validate the username
bool validateUsername(const string& username) {
    if (username.length() < 5) {
        throw TooShortException(username.length()); // Throw exception if username is too short
    }
    for (char c : username) {
        if (!isalpha(c)) { // Check if the username contains only alphabetic characters
            return false;
        }
    }
    return true;
}

int main() {
    int t;
    cin >> t; // Number of test cases
    while (t--) {
        string username;
        cin >> username;

        try {
            if (validateUsername(username)) {
                cout << "Valid" << endl;
            } else {
                cout << "Invalid" << endl;
            }
        } catch (const TooShortException& e) {
            cout << e.what() << endl; // Print the custom exception message
        }
    }

    return 0;
}
