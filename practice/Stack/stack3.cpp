#include<iostream>
#include<bits\stdc++.h>
using namespace std;

// using function
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

// using recursion
void copyStack(stack<int> &st,stack<int> &result){
    if(st.empty()) return ;
    int cur=st.top();
    st.pop();
    copyStack(st,result);
    result.push(cur);
}

int main(){
    stack<int> st;
    stack<int> res;
    st.push(5);
    st.push(15);
    st.push(25);
    st.push(35);
    //using function
    // res = copyStack(st);

    //using recursion
    copyStack(st,res);

    while (!res.empty())
    {
        int cur= res.top() ;
        res.pop();
        cout << cur<< " ";
    }
   return 0;
}