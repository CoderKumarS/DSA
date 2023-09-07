// You are using GCC
#include<iostream>
#include<iomanip>
using namespace std;
int main(){
    int num;
    cin>>num;
    int k=4;
    k%=num;
    cout<<k;
    return 0;
}