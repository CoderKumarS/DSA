#include <iostream>
#include <vector>
#include <deque>
using namespace std;
vector<int> maxWindow(vector<int> &arr, int k)
{
    deque<int> dq;
    vector<int> res;
    for (int i = 0; i < k; i++)
    {
        while (not dq.empty() and arr[dq.back()] < arr[i])
        {
            dq.pop_back();
        }
        dq.push_back(i);
    }
    res.push_back(arr[dq.front()]);
    for (int i = k; i < arr.size(); i++)
    {
        int curr = arr[i];
        if (dq.front() == (i - k))
            dq.pop_front();
        while (not dq.empty() and arr[dq.back()] < arr[i])
        {
            dq.pop_back();
        }
        dq.push_back(i);
        res.push_back(arr[dq.front()]);
    }
    return res;
}
int main()
{
    // in complete
    // vector<int> in={5,9,3,-5,7,3,-4,54};
    // vector<int> ou=maxWindow(in,3);
    // while(!ou.empty()){
    //     cout<<ou.front()<<" ";
    //     ou.pop_back();
    // }
    return 0;
}