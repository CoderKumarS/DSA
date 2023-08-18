#include <iostream>
#include <climits>
using namespace std;

const int MAX_SIZE = 100;

int findSecondSmallest(int arr[], int size) {
    int smallest = INT_MAX;
    int secondSmallest = INT_MAX;

    // Find the smallest and second smallest elements in the array
    for (int i = 0; i < size; i++) {
        if (arr[i] < smallest) {
            secondSmallest = smallest;
            smallest = arr[i];
        } else if (arr[i] < secondSmallest && arr[i] != smallest) {
            secondSmallest = arr[i];
        }
    }

    return secondSmallest;
}

int main() {
    int arr[MAX_SIZE];
    int size;

    // Input the size of the array
    cin >> size;

    // Input the elements of the array
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }

    // Call the function to find the second smallest element
    int secondSmallest = findSecondSmallest(arr, size);

    // Display the second smallest element
    cout << "Second Smallest Element: " << secondSmallest << endl;

    return 0;
}