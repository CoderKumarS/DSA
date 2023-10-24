#include<iostream>
#include<bits\stdc++.h>
using namespace std;
stack<int> copyStack(stack<int> &in){
    stack<int> temp;
    while(!in.empty()){
        // int cur=in.top();
        // in.pop();
        // temp.push(cur);
        temp.push(in.top());
        in.pop();
    }
    stack<int> result;
    while(!temp.empty()){
        // int cur =temp.top();
        // temp.pop();
        // result.push(cur);
        result.push(temp.top());
        temp.pop();
    }
    return result;
}
int main(){
    stack<int> st;
    st.push(5);
    st.push(15);
    st.push(25);
    st.push(35);
    stack<int> res = copyStack(st);
    while (!res.empty())
    {
        int cur= res.top() ;
        res.pop();
        cout << cur<< " ";
    }
   return 0;
}