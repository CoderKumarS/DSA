#include<iostream>
using namespace std;
void merge(int *a, int left, int mid, int right){
//void merge(char *a, int left, int mid, int right){
	int n1=mid-left+1;
	int n2 =right-mid;
	int a1[n1], a2[n2];
	for(int i = 0; i<n1;i++)
		a1[i]=a[left+i];
	for(int i = 0; i<n2;i++)
		a2[i]=a[mid+1+i];
	
	int i = 0, j = 0, k = left;
	while(i<n1&&j<n2){
		if(a1[i]>=a2[j]){
			a[k]=a1[i];
			i++;
		}else{
			a[k]=a2[j];
			j++;
		}	
		k++;
	}
	while(i<n1){
		a[k]=a1[i];
		k++;i++;
	}
	while(j<n2){
		a[k]=a2[j];
		k++;j++;
	}
}
void mergeSort(int *a, int left, int right){
//void mergeSort(char *a, int left, int right){
	if(left<right){
		int mid = left+(right-left)/2;
		mergeSort(a,left,mid);
		mergeSort(a,mid+1,right);
		merge(a,left,mid,right);
	}
}
int main(){
	int n;
	cin>>n;
	int a[n];
//	char a[n];
	for(int i = 0; i<n;i++)
		cin>>a[i];
	mergeSort(a,0,n-1);
//	for(int i = 0; i<n;i++)
//		cout<<a[i]<<" ";
	for(int i = n-1; i>=0;i--)
		cout<<a[i]<<" ";
	return 0;
}
