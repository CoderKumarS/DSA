<<<<<<< HEAD
#include <iostream>
using namespace std;
int main()
{
    int a[100], i, n, d, loc = -1;
    int beg, mid, end;
    cout << "Enter the size of the array : ";
    cin >> n;
    beg = 0, end = n - 1, mid = end / 2;
    cout << "Enter the element (in sorted form): " << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    cout << "Enter the desire element : ";
    cin >> d;
    // binary  search
    while (beg <= end || mid == d)
    {
        mid = (beg + end) / 2;
        if (d > a[mid])
        {
            beg = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
    }
    cout << mid;
    return 0;
}
=======
#include <iostream>
using namespace std;
int main()
{
    int a[100], i, n, d, loc = -1;
    int beg, mid, end;
    cout << "Enter the size of the array : ";
    cin >> n;
    beg = 0, end = n - 1, mid = end / 2;
    cout << "Enter the element (in sorted form): " << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    cout << "Enter the desire element : ";
    cin >> d;
    // binary  search
    while (beg <= end || mid == d)
    {
        mid = (beg + end) / 2;
        if (d > a[mid])
        {
            beg = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
    }
    cout << mid;
    return 0;
}
>>>>>>> 16db306eec4570a2fde751522bb8d139285fe67c
