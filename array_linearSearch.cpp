#include <iostream>
using namespace std;
int main()
{
    int a[100], i, n, d, loc = -1;
    cout << "Enter the size of the array : ";
    cin >> n;
    cout << "Enter the element : " << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    cout << "Enter the desire element : ";
    cin >> d;
    for (int i = 0; i < n; i++)
    {
        if (d == a[i])
        {
            loc = i;
        }
    }
    if (loc == -1)
    {
        cout << "Desire element not found";
    }
    else
    {
        cout << "Element found at location "<< loc + 1;
    }
    return 0;
}
