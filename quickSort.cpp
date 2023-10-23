// You are using GCC
#include <iostream>
using namespace std;
void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
int partition(int arr[], int low, int high)
{
    int pivot = arr[low];
    int start = low + 1;
    int end = high;

    while (start <= end)
    {
        while (arr[start] <= pivot)
        {
            start++;
        }
        while (arr[end] >= pivot && end >= start)
        {
            end--;
        }
        if (end < start)
        {
            break;
        }
        swap(&arr[start], &arr[end]);
    }
    swap(&arr[start], &arr[end]);
    return end;
}

void quickSort(int arr[], int low, int high)
{
    if (low < high)
    {
        int pi = partition(arr, low, high);
        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
    }
}

int main()
{
    int size, i;
    cout << "Enter size of array: ";
    cin >> size;

    int arr[size];
    cout << "Enter the element in array: " << endl;
    for (i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    cout << "original array: " << endl;
    for (i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }

    quickSort(arr, 0, size - 1);

    cout << "\nsorted array array: " << endl;
    for (i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}