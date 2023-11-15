#include<iostream>
using namespace std;
void minHeapify(int *a, int n, int i){
	int smallest=i;
	int left=2*i+1;
	int right=2*i+2;
	
	if(left<n&&a[left]<a[smallest]){
		smallest=left;
	}
	if(right<n&&a[right]<a[smallest]){
		smallest=right;
	}
	if(smallest!=i){
		swap(a[i],a[smallest]);
		minHeapify(a,n,smallest);
	}
}

void buildMinHeap(int *a, int n){
	for(int i=n/2-1;i>=0;i--){
		minHeapify(a,n,i);
	}
}
void print(int *a, int n){
	for(int i=0;i<n;i++){
		cout<<a[i]<<" ";
	}
}
int main(){
	int n;
	cin>>n;
	int *a=new int[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	buildMinHeap(a,n);
	print(a,n);
	return 0;
}
