<<<<<<< HEAD
#include <iostream>
using namespace std;

void printArray(int *A, int n)
{
	for (int i = 0; i < n; i++)
	{
		printf("%d ", A[i]);
	}
	printf("\n");
}
void selectionSort(int *A, int n)
{
	int indexOfMin, temp;
	for (int i = 0; i < n - 1; i++)
	{
		indexOfMin = i;
		for (int j = i + 1; j < n; j++)
		{
			if (A[j] < A[indexOfMin])
			{
				indexOfMin = j;
			}
		}
		temp = A[i];
		A[i] = A[indexOfMin];
		A[indexOfMin] = temp;
	}
}

int main()
{
	int A[100], n;
	cout << "Enter the size of the Array: ";
	cin >> n;
	cout << "Enter the element of the Array: ";
	for (int i = 0; i < n; i++)
	{
		cin >> A[i];
	}
	cout << "unsorted Array: ";
	printArray(A, n);
	selectionSort(A, n);
	cout << "sorted Array: ";
	printArray(A, n);

	return 0;
=======
#include <iostream>
using namespace std;

void printArray(int *A, int n)
{
	for (int i = 0; i < n; i++)
	{
		printf("%d ", A[i]);
	}
	printf("\n");
}
void selectionSort(int *A, int n)
{
	int indexOfMin, temp;
	for (int i = 0; i < n - 1; i++)
	{
		indexOfMin = i;
		for (int j = i + 1; j < n; j++)
		{
			if (A[j] < A[indexOfMin])
			{
				indexOfMin = j;
			}
		}
		temp = A[i];
		A[i] = A[indexOfMin];
		A[indexOfMin] = temp;
	}
}

int main()
{
	int A[100], n;
	cout << "Enter the size of the Array: ";
	cin >> n;
	cout << "Enter the element of the Array: ";
	for (int i = 0; i < n; i++)
	{
		cin >> A[i];
	}
	cout << "unsorted Array: ";
	printArray(A, n);
	selectionSort(A, n);
	cout << "sorted Array: ";
	printArray(A, n);

	return 0;
>>>>>>> 16db306eec4570a2fde751522bb8d139285fe67c
}