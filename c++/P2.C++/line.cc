#include <iostream>
#include <climits>

int main() {
    int n, largest = INT_MIN, secondLargest = INT_MIN;
    std::cin >> n;

    for (int i = 0; i < n; i++) {
        int x;
        std::cin >> x;
        if (x > largest) {
            secondLargest = largest;
            largest = x;
        } else if (x != largest && x > secondLargest) {
            secondLargest = x;
        }
    }

    if (n == 0 || n == 1) {
        secondLargest = INT_MIN;
    }

    std::cout << secondLargest << std::endl;

    return 0;
}
