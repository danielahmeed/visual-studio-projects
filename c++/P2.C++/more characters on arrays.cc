#include <iostream>
#include <cstring>
#include <cctype>
using namespace std;

bool is_palindrome(string s) {
    // Convert the string to lowercase and remove non-alphanumeric characters
    string cleaned;
    for (char c : s) {
        if (isalnum(c)) {
            cleaned += tolower(c);
        }
    }
    // Check if the reversed string is equal to the original string
    return cleaned == string(cleaned.rbegin(), cleaned.rend());
}

int main() {
    string s;
    getline(cin, s);
    if (is_palindrome(s)) {
        cout << "true\n";
    } else {
        cout << "false\n";
    }
    return 0;
}
