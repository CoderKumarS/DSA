#include <iostream>
#define size 10
using namespace std;
int main()
{
    int k;
    cin >> k;
    int hashtable[size];
    for (int i = 0; i < size; i++)
    {
        hashtable[i] = -1;
    }
    for (int i = 0; i < k; i++)
    {
        int key;
        cin >> key;

        int index = key % size;
        if (hashtable[index] == -1)         // no collision
            hashtable[index] = key;
        else
        {                                  // collision
            while (hashtable[index] != -1)
            {
                index++;
                if (index == 10)
                    index = 0;
            }
            hashtable[index] = key;
        }
    }
    // printing keys index wise
    for (int i = 0; i < 10; i++)
    {
        if (hashtable[i] != -1)
        {
            cout << "\nIndex " << i << ":key = " << hashtable[i];
        }
    }

    return 0;
}