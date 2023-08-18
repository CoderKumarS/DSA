#include <iostream>
#include <algorithm>
using namespace std;

void reverseArray(char arr[], int size) {
    reverse(arr, arr + size);
}

int main() {
    const int MAX_SIZE = 100;
    char arr[MAX_SIZE];
    int size;

    // Input the size of the array
    cin >> size;

    // Input the characters in the array
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }

    // Call the function to reverse the array
    reverseArray(arr, size);

    // Display the updated array
    cout << "Updated array: ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}