#include <iostream>
#include <algorithm> // for min(), max(), swap(), sort(), reverse(), find()
#include <cstdlib>   // for abs()
#include <cctype>    // for toupper(), tolower()
#include <cstring>   // for strlen(), strcmp()
#include <vector>    // for vector
#include <string>    // for string

// 1. min() function
void minFunction() {
    int a = 5, b = 10;
    int result = std::min(a, b); // Get the minimum value
    std::cout << "Min value: " << result << std::endl;
}

// 2. max() function
void maxFunction() {
    int a = 5, b = 10;
    int result = std::max(a, b); // Get the maximum value
    std::cout << "Max value: " << result << std::endl;
}

// 3. swap() function
void swapFunction() {
    int a = 5, b = 10;
    std::cout << "Before swap: a = " << a << ", b = " << b << std::endl;
    std::swap(a, b); // Swap the values of a and b
    std::cout << "After swap: a = " << a << ", b = " << b << std::endl;
}

// 4. abs() function
void absFunction() {
    int num = -10;
    int result = std::abs(num); // Get the absolute value
    std::cout << "Absolute value: " << result << std::endl;
}

// 5. toupper() and tolower() functions
void caseConversion() {
    char ch = 'a';
    std::cout << "Uppercase: " << (char)std::toupper(ch) << std::endl;
    std::cout << "Lowercase: " << (char)std::tolower(ch) << std::endl;
}

// 6. strlen() function
void strlenFunction() {
    const char* str = "Hello, World!";
    std::cout << "Length of string: " << std::strlen(str) << std::endl;
}

// 7. strcmp() function
void strcmpFunction() {
    const char* str1 = "Hello";
    const char* str2 = "World";
    int result = std::strcmp(str1, str2); // Compare strings
    if (result == 0) {
        std::cout << "Strings are equal." << std::endl;
    } else if (result < 0) {
        std::cout << "str1 is smaller." << std::endl;
    } else {
        std::cout << "str2 is smaller." << std::endl;
    }
}

// 8. itoa() function (MSVC specific)
void itoaFunction() {
    int num = 123;
    char str[20];
    itoa(num, str, 10); // Convert integer to string
    std::cout << "Integer as string: " << str << std::endl;
}

// 9. reverse() function (for containers)
void reverseFunction() {
    std::vector<int> vec = {1, 2, 3, 4, 5};
    std::reverse(vec.begin(), vec.end()); // Reverse the vector
    std::cout << "Reversed vector: ";
    for (int val : vec) {
        std::cout << val << " ";
    }
    std::cout << std::endl;
}

// 10. sort() function (for containers)
void sortFunction() {
    std::vector<int> vec = {5, 3, 8, 1, 2};
    std::sort(vec.begin(), vec.end()); // Sort the vector
    std::cout << "Sorted vector: ";
    for (int val : vec) {
        std::cout << val << " ";
    }
    std::cout << std::endl;
}

// 11. find() function (for containers)
void findFunction() {
    std::vector<int> vec = {1, 2, 3, 4, 5};
    auto it = std::find(vec.begin(), vec.end(), 3); // Find 3 in the vector
    if (it != vec.end()) {
        std::cout << "Found 3 at position: " << std::distance(vec.begin(), it) << std::endl;
    } else {
        std::cout << "Not found." << std::endl;
    }
}

int main() {
    // Calling each function to demonstrate their usage
    minFunction();
    maxFunction();
    swapFunction();
    absFunction();
    caseConversion();
    strlenFunction();
    strcmpFunction();
    itoaFunction(); // Only works in MSVC or similar compilers
    reverseFunction();
    sortFunction();
    findFunction();

    return 0;
}
