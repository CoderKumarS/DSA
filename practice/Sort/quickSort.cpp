#include<iostream>
using namespace std;
int partition(int *a, int left, int right){
	int pivot= a[right];
	int i = left-1;

	for(int j = left; j<right; j++){
		if(a[j]<pivot){
			i++;
			swap(a[i], a[j]);
		}
	}
	swap(a[i+1], a[right]);
	return i+1;
}
void quickSort(int *a, int left, int right){
	if(left<right){
		int pivotIndex = partition(a,left,right);
		quickSort(a,left,pivotIndex-1);
		quickSort(a,pivotIndex+1,right);
	}else
		return;
}
int main(){
	int n;
	cin>>n;
	int a[n];
	for(int i = 0; i<n;i++)
		cin>>a[i];
	quickSort(a,0,n-1);
	for(int i = 0; i<n;i++)
		cout<<a[i]<<" ";
	return 0;
}
