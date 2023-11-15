#include<iostream>
using namespace std;
void heapify(int arr[], int i, int n){
	int largest = i;
	int left = 2*i;
	int right = 2*i+1;
	if(left<n&&arr[largest]<arr[left]){
		largest=left;
	}
	if(right<n&&arr[largest]<arr[right]){
		largest=right;
	}
	if(largest!=i){
		swap(arr[largest], arr[i]);
		heapify(arr,largest,n);
	}
}
void buildheap(int arr[], int n){
	for(int i = n/2;i>0;i--){
		heapify(arr,i,n);
	}
}
int main(){
	int arr[6]= {-1,54,53,55,52,50};
	int n = 5;
	buildheap(arr, n);
	for(int i = 1 ; i <= n ; i++)
		cout<<arr[i]<<" ";
	return 0;
}
