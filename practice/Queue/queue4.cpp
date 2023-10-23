#include<iostream>
#include<queue>
#include<stack>
using namespace std;

int main(){
    queue<int> q;
    stack<int> s;
    q.push(5);
    q.push(15);
    q.push(25);
    q.push(35);

    while (!q.empty())
    {
        cout<<q.front()<<" ";
        s.push(q.front());
        q.pop();
    }
    cout<<endl;
    while(!s.empty()){
        cout<<s.top()<<" ";
        // q.push(s.top()); // for recreation of queue with reverse element
        s.pop();
    }
    // for recreation of queue with reverse element
    // while (!q.empty())
    // {
    //     cout<<q.front()<<" ";
    //     s.push(q.front());
    //     q.pop();
    // }
    // cout<<endl;
    return 0;
}