#include <iostream>
#include <cstring> // For string-related functions like strlen
using namespace std;

bool isValid(const char* name) {
    for (int i = 0; name[i] != '\0'; i++) {
        // Check if the character is not alphanumeric (letters or digits)
        if (!(name[i] >= 'A' && name[i] <= 'Z') &&
            !(name[i] >= 'a' && name[i] <= 'z') &&
            !(name[i] >= '0' && name[i] <= '9')) {
            return false; // Return false if an invalid character is found
        }
    }
    return true; // String is valid
}

int main() {
    const char* name = "Apj&534"; // Use const char* for string literals

    if (isValid(name)) {
        cout << "Valid string" << endl;
    } else {
        cout << "Invalid string" << endl;
    }

    return 0;
}
