//Deque
#include<iostream>
#include<deque>
using namespace std;
int main(){
    deque<int> d;
    d.push_back(15);
    d.push_front(5);
    d.push_back(15);
    d.push_front(0);
    d.push_back(25);
    while (!d.empty())
    {
        cout<<d.front()<<" ";
        d.pop_front();
    }
    cout<<endl;
    return 0;
}