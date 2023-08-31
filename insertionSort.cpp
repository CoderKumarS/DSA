<<<<<<< HEAD
#include<iostream>
using namespace std;

void insertionSort(int A[], int n) {
    for (int i = 0; i < n; i++) {
        int j = i - 1;
        int x = A[i];
        while (j >= 0 && A[j] > x) {
            A[j + 1] = A[j];
            j--;
        }
        A[j + 1] = x;
    }
}

int main() {
    int a[100], n;
    cout << "Enter the size of the array: ";
    cin >> n;
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    insertionSort(a, n);
    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
    return 0;
}
=======
#include<iostream>
using namespace std;

void insertionSort(int A[], int n) {
    for (int i = 0; i < n; i++) {
        int j = i - 1;
        int x = A[i];
        while (j >= 0 && A[j] > x) {
            A[j + 1] = A[j];
            j--;
        }
        A[j + 1] = x;
    }
}

int main() {
    int a[100], n;
    cout << "Enter the size of the array: ";
    cin >> n;
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    insertionSort(a, n);
    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
    return 0;
}
>>>>>>> 16db306eec4570a2fde751522bb8d139285fe67c
