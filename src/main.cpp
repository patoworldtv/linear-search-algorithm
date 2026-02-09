#include <iostream>
using namespace std;

int linearSearch(int arr[], int n, int x) {
    for (int i = 0; i < n; i++) {
        if (arr[i] == x) {
            return i;
        }
    }
    return -1;
}

int main() {
    int arr[] = {3, 7, 1, 9, 4, 2};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << "\n";

    int x;
    cout << "Enter value to search: ";
    cin >> x;

    int result = linearSearch(arr, n, x);

    if (result != -1)
        cout << "Value found at index: " << result << endl;
    else
        cout << "Value not found." << endl;

    return 0;
}
