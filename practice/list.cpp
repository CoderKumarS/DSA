// You are using GCC
#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    vector<string> name, name2,merged;
    int size,size2;
    cin>>size;
    cin.ignore();
    for(int i=0;i<size;i++){
        string str;
        getline(cin,str);
        name.push_back(str);
    }
    cin>>size2;
    // size2=2;
    cin.ignore();
    for(int i=0;i<size2;i++){
        string nam;
        getline(cin,nam);
        name2.push_back(nam);
    }
    merged.insert(merged.end(), name.begin(), name.end());
    merged.insert(merged.end(), name2.begin(), name2.end());
    sort(merged.begin(), merged.end());
    cout<<"Merged and sorted array: ";
    for(const string& fruit : merged){
        cout<<fruit<<" ";
    }
    return 0;
}