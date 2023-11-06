#include <iostream>
using namespace std;

void maxHeapify(int arr[], int n, int i) {
    int largest = i;
    int left = 2 * i + 1;
    int right = 2 * i + 2;

    if (left < n && arr[left] > arr[largest])
        largest = left;

    if (right < n && arr[right] > arr[largest])
        largest = right;

    if (largest != i) {
        swap(arr[i], arr[largest]);
        maxHeapify(arr, n, largest);
    }
}

int removeHighestScore(int arr[], int& n) {
    if (n <= 0)
        return -1;

    int highestScore = arr[0];

    arr[0] = arr[n - 1];
    n--;

    maxHeapify(arr, n, 0);

    return highestScore;
}

int main() {
    int* studentScores = nullptr;
    int n = 0;

    cin >> n;
    studentScores = new int[n];

    for (int i = 0; i < n; i++) {
        cin >> studentScores[i];
    }

    for (int i = n / 2 - 1; i >= 0; i--) {
        maxHeapify(studentScores, n, i);
    }

    // int highestScore = removeHighestScore(studentScores, n);
    int highestScore = studentScores[0];
    cout << highestScore << endl; 
    delete[] studentScores; 
    return 0;
}