#include <iostream>
using namespace std;

int main() {
    int char_count = 0;
    int digit_count = 0;
    int space_count = 0;

    char c;
    while (cin.get(c)) {  // read a character from the input stream
        if (c == '$') {  // break the loop if '$' is encountered
            break;
        }
        if (islower(c)) {  // check if the character is a lowercase English alphabet
            char_count++;
        } else if (isdigit(c)) {  // check if the character is a digit
            digit_count++;
        } else if (isspace(c)) {  // check if the character is a white space
            space_count++;
        }
    }

    cout << char_count << " " << digit_count << " " << space_count << endl;  // print the counts

    return 0;
}
