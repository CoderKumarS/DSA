// You are using GCC
#include<iostream>
using namespace std;

void merge(int arr[], int l, int m , int r, int size){
    int i = l;
    int j = m+1;
    int k;
    
    int temp[size];
    while(i<=m && j<=r){
        if (arr[i]<=arr[j]){
            temp[k]= arr[i];
            i++;
            k++;
        }else{
            temp[k]= arr[j];
            j++;
            k++;
        }
    }
        while(i<=r){
            temp[k]= arr [ i];
            i++;
            k++;
        }
        while(j<=r){
            temp[k]= arr [j];
            j++;
            k++;
        }
        for(int i = l; i<=r;i++){
            arr[i]=temp[k];
        }
}

void mergeSort(int arr[], int l, int r, int size){
    if(l<r){
        int m = (l+r)/2;
        mergeSort(arr, l,m,size);
        mergeSort(arr, m+1, r, size);
        merge(arr,l,m,r,size);
    }
}
int main(){
    cout<<"Enter the size of array: "<<endl;
    int size;
    cin>>size;
    int myArr[size];
    cout<<"Enter "<<size<<" integers in any order: "<<endl;
    for(int i = 0;i<size;i++){
        cin>>myArr[i];
    }
    cout<<"Before Sorting "<<endl;
    for(int i = 0; i<size; i++){
        cout<<myArr[i]<<" ";
    }
    mergeSort(myArr, 0,(size-1), size);
    cout<<"After Sorting "<<endl;
    for(int i = 0; i<size; i++){
        cout<<myArr[i]<<" ";
    }
    return 0;
}
