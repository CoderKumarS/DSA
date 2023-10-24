//  priority queue
#include<iostream>
#include<bits\stdc++.h>
using namespace std;
int main(){
    // max heap
    priority_queue<int> pq;
    pq.push(5);
    pq.push(15);
    pq.push(25);
    pq.pop();
    pq.push(35);
    while(!pq.empty()){
        cout<<pq.top()<<" ";
        pq.pop();
    }

    // min heap
    // priority_queue<int, vector<int>, greater<int>> pq;
    // pq.push(5);
    // pq.push(15);
    // pq.push(25);
    // pq.pop();
    // pq.push(35);
    // while(!pq.empty()){
    //     cout<<pq.top()<<" ";
    //     pq.pop();
    // }

    // pair in priority queue
    // priority_queue<pair<int, char>> pq;
    // pq.push(make_pair(5,'s'));
    // pq.push(make_pair(4,'u'));
    // pq.push(make_pair(3,'j'));
    // pq.pop();
    // pq.push(make_pair(2,'a'));
    // pq.push(make_pair(1,'l'));
    // while(!pq.empty()){
    //     cout<<pq.top().second<<"";
    //     pq.pop();
    // }
    return 0;
}