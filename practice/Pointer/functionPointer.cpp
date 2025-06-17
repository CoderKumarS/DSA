#include<iostream>
#include<vector>
using namespace std;

typedef void(*function)(int);

void forEach(const vector<int> &arr, function func){
    for(int num : arr)
        func(num);
}

int main(){
    vector<int> arr = {1,2,5,6,7};
    forEach(arr, [](int num){
        cout << "Value : " << num << endl;
    });
    return 0;
}