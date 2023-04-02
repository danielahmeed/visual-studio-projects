#include<iostream>
using namespace std;

int firstIndex(int arr[], int n, int x) {
    // base case
    if(n==0) {
        return -1;
    }

    // recursive case
    if(arr[0] == x) {
        return 0;
    } else {
        int index = firstIndex(arr+1, n-1, x);
        if(index == -1) {
            return -1;
        } else {
            return index+1;
        }
    }
}

int main() {
    int n, x;
    cin >> n;
    int arr[n];
    for(int i=0; i<n; i++) {
        cin >> arr[i];
    }
    cin >> x;

    cout << firstIndex(arr, n, x) << endl;

    return 0;
}
