#include<iostream>
#include<algorithm>
using namespace std;
void heapify(int *a, int n, int i){
	int largest=i;
	int left=2*i+1;
	int right=2*i+2;
	if(left<n&&a[largest]>a[left]){
		largest=left;
	}
	if(right<n&&a[largest]>a[right]){
		largest=right;
	}
	if(largest!=i){
		swap(a[largest],a[i]);
		heapify(a,n,largest);
	}
}
void heapSort(int *a,int n){
	for(int i=n/2;i>=0;i--)
		heapify(a,n,i);
	for (int i = n - 1; i > 0; i--) {
        swap(a[0], a[i]);
        heapify(a, i, 0);
	}
}
int main(){
	int n;
	cin>>n;
	int *a=new int[n];
	for(int i=0;i<n;i++)
		cin>>a[i];
	heapSort(a,n);
	for(int i=0;i<n;i++)
		cout<<a[i]<<" ";
	return 0;
}
